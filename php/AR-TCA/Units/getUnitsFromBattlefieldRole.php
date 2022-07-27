<?php

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$battlefieldRoleName = $_POST['battlefieldRoleName'];
$factionName = $_POST['factionName'];

$stmt = $conn->prepare("SELECT u.unitName FROM `unit` u, `battlefieldrole` b, faction f 
WHERE u.idUnit = b.unit_idUnit AND u.idUnit = f.idFaction AND b.battlefieldRoleName = ? AND f.factionName = ?;");
$stmt->bindParam(1, $battlefieldRoleName);
$stmt->bindParam(2, $factionName);
$stmt->execute();

$row = $stmt->fetchAll(PDO::FETCH_COLUMN, 0); //fetches all the specified column

if (empty($row))
{
    echo "Error 1: getUnitsFromBattlefieldroleQuery failed!";
    exit();
}

$battlefieldRoleUnits = implode("_", $row); //converts array to string and adds "_" between each element

echo "Success 0: Successfully fetched Unit data!_" . $battlefieldRoleUnits;
$conn = null;
