<?php

//to reduce code duplication
include "../db.php";

//TODO: add power and point cost to query if a bool is true -> add this bool to imageRec and AddUnitTo... 

//TODO: or write a new getUnit function to get costs and battlefield role

//Needs to be = as in form in C#
$unitName = $_POST['unitName'];

$stmt = $conn->prepare("SELECT unitMove, unitWeaponSkill, unitBallisticSkill, unitStrength, unitToughness, unitWounds, unitAttacks, unitLeadership, unitSave FROM unit WHERE unitName = ?");
$stmt->bindParam(1, $unitName);
$stmt->execute();

$row = $stmt->fetch(PDO::FETCH_ASSOC);

if (empty($row['unitMove']))
{
    echo "Error 1: getUnitQuery failed!";
    exit();
}

$unitMove = $row['unitMove'];
$unitWeaponSkill = $row['unitWeaponSkill'];
$unitBallisticSkill = $row['unitBallisticSkill'];
$unitStrength = $row['unitStrength'];
$unitToughness = $row['unitToughness'];
$unitWounds = $row['unitWounds'];
$unitAttacks = $row['unitAttacks'];
$unitLeadership = $row['unitLeadership'];
$unitSave = $row['unitSave'];

echo "Success 0: Successfully fetched Unit data!_" . $unitMove . "_" . $unitWeaponSkill . "_" . $unitBallisticSkill . "_" . $unitStrength . "_" . $unitToughness . "_" . $unitWounds . "_" . $unitAttacks . "_" . $unitLeadership . "_" . $unitSave;
$conn = null;