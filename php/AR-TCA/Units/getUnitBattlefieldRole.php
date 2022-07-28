<?php

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$unitID = $_POST['unitID'];

$stmt = $conn->prepare("SELECT `battlefieldRoleName` FROM `battlefieldrole` WHERE `unit_idUnit` = ?");
$stmt->bindParam(1, $unitID);
$stmt->execute();

$row = $stmt->fetch(PDO::FETCH_ASSOC);

if (empty($row['battlefieldRoleName']))
{
    echo "Error 1: getUnitQuery failed!";
    exit();
}

$battlefieldRoleName = $row['battlefieldRoleName'];

echo "Success 0: Successfully fetched Battlefield Role of Unit data!_" . $battlefieldRoleName;
$conn = null;