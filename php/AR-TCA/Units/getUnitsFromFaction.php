<?php

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$factionName = $_POST['factionName'];

$stmt = $conn->prepare("SELECT `unitName` FROM unit u, faction f WHERE u.idUnit = f.unit_idUnit AND f.factionName = ?;");
$stmt->bindParam(1, $factionName);
$stmt->execute();

$row = $stmt->fetchAll(PDO::FETCH_COLUMN, 0); //fetches all results in the specified column

if (empty($row))
{
    echo "Error 1: getUnitsFromFactionQuery failed!";
    exit();
}

$factionUnits = implode("_", $row); //converts array to string and adds "_" between each element

echo "Success 0: Successfully fetched Unit data!_" . $factionUnits;
$conn = null;
