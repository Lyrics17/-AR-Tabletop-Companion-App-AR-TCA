<?php

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$unitName = $_POST['unitName'];
$unitPowerCost = $_POST['unitPowerCost'];
$unitPointCost = $_POST['unitPointCost'];
$unitMove = $_POST['unitMove'];
$unitWeaponSkill = $_POST['unitWeaponSkill'];
$unitBallisticSkill = $_POST['unitBallisticSkill'];
$unitStrength = $_POST['unitStrength'];
$unitToughness = $_POST['unitToughness'];
$unitWounds = $_POST['unitWounds'];
$unitAttacks = $_POST['unitAttacks'];
$unitLeadership = $_POST['unitLeadership'];
$unitSave = $_POST['unitSave'];
$codexField = $_POST['codexField'];

//FK fields
$factionName = $_POST['factionName'];
$battlefieldRoleName = $_POST['battlefieldRoleName'];

//Get unitName 
$stmt = $conn->prepare("SELECT unitName FROM unit WHERE unitName =?");
//bind $unitName to ? placeholder
$stmt->bindParam(1, $unitName);
//execute query
$stmt->execute();
//FETCH_ASSOC: returns each row as an array indexed by column
$row = $stmt->fetch(PDO::FETCH_ASSOC);

//check if unit already exists
if (!empty($row['unitName']))
{
    echo "Error 1: Unit already exists!";
    exit();
}


//insertQuery
$stmt = $conn->prepare("INSERT INTO `unit` (`unitName`, `unitPointCost`, `unitPowerCost`, `unitMove`, `unitWeaponSkill`, `unitBallisticSkill`, `unitStrength`, `unitToughness`, `unitWounds`, `unitAttacks`, `unitLeadership`, `unitSave`, `unitPageInCodex`) 
    VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?)");
$stmt->bindValue(1, $unitName);
$stmt->bindValue(2, $unitPointCost);
$stmt->bindValue(3, $unitPowerCost);
$stmt->bindValue(4, $unitMove);
$stmt->bindValue(5, $unitWeaponSkill);
$stmt->bindValue(6, $unitBallisticSkill);
$stmt->bindValue(7, $unitStrength);
$stmt->bindValue(8, $unitToughness);
$stmt->bindValue(9, $unitWounds);
$stmt->bindValue(10, $unitAttacks);
$stmt->bindValue(11, $unitLeadership);
$stmt->bindValue(12, $unitSave);
$stmt->bindValue(13, $codexField);

//Check if statement failed
if (!$stmt->execute())
{
    echo "Error 2: insertUserQuery failed!";
    exit();
}

//Get newest idUnit for QRCode creation
$stmt = $conn->prepare("SELECT MAX(idUnit) FROM unit");
//execute query & check if successfull
if ($stmt->execute())
{
    $row = $stmt->fetch(PDO::FETCH_ASSOC);
}
else
{
    echo "Error 3: getUnitQuery failed!";
    exit();
}
//safe result in new var
$newestUnitID = $row['MAX(idUnit)'];

//insert idUnit in faction and battlefieldRole

//faction
$stmt = $conn->prepare("INSERT INTO `faction` (`factionName`, `unit_idUnit`) VALUES (?,?)");
$stmt->bindValue(1, $factionName);
$stmt->bindValue(2, $newestUnitID);

//Check if statement failed
if (!$stmt->execute())
{
    echo "Error 4: insertFactionQuery failed!";
    exit();
}

//battlefieldRole
$stmt = $conn->prepare("INSERT INTO `battlefieldrole` (`battlefieldRoleName`, `unit_idUnit`) VALUES (?,?)");
$stmt->bindValue(1, $battlefieldRoleName);
$stmt->bindValue(2, $newestUnitID);

//Check if statement failed
if (!$stmt->execute())
{
    echo "Error 5: insertBattlefieldRoleQuery failed!";
    exit();
}

echo "Success 0: Successfully inserted new Unit! Name_" . $unitName;
$conn = null;
