<?php

//to reduce code duplication
include "../db.php";

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

echo "Success 0: Successfully fetched Unit data! Movement_" . $unitMove . " _WeaponSkill_" . $unitWeaponSkill . " _BallisticSkill_" . $unitBallisticSkill . " _Strength_" . $unitStrength . " _Toughness_" . $unitToughness . " _Wounds_" . $unitWounds . " _Attacks_" . $unitAttacks . " _Leadership_" . $unitLeadership . " _Save_" . $unitSave;
$conn = null;