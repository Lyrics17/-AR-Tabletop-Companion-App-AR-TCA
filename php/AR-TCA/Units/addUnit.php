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
$userUsername = $_POST['userUsername'];


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


//Get idFaction  
$stmt = $conn->prepare("SELECT idFaction FROM faction WHERE factionName =?");
//bind $factionName to ? placeholder
$stmt->bindParam(1, $factionName);
//execute query & check if successfull
if ($stmt->execute())
{
    $row = $stmt->fetch(PDO::FETCH_ASSOC);
}
else
{
    echo "Error 2: getFactionQuery failed!";
    exit();
}
//safe result in new var
$faction_idFaction = $row['idFaction'];


//Get idBattlefieldRole   
$stmt = $conn->prepare("SELECT idBattlefieldRole FROM battlefieldrole WHERE battlefieldRoleName =?");
//bind $battlefieldRoleName to ? placeholder
$stmt->bindParam(1, $battlefieldRoleName);
//execute query & check if successfull
if ($stmt->execute())
{
    $row = $stmt->fetch(PDO::FETCH_ASSOC);
}
else
{
    echo "Error 3: getBattlefieldRoleQuery failed!";
    exit();
}
//safe result in new var
$battlefieldRole_idBattlefieldRole = $row['idBattlefieldRole'];


//Get idUser   
$stmt = $conn->prepare("SELECT idUser FROM user WHERE userUsername =?");
//bind $userUsername to ? placeholder
$stmt->bindParam(1, $userUsername);
//execute query & check if successfull
if ($stmt->execute())
{
    $row = $stmt->fetch(PDO::FETCH_ASSOC);
}
else
{
    echo "Error 4: getUserQuery failed!";
    exit();
}
//safe result in new var
$user_idUser  = $row['idUser'];


//insertQuery
$stmt = $conn->prepare("INSERT INTO `unit` (`unitName`, `unitPointCost`, `unitPowerCost`, `unitMove`, `unitWeaponSkill`, `unitBallisticSkill`, `unitStrength`, `unitToughness`, `unitWounds`, `unitAttacks`, `unitLeadership`, `unitSave`, `unitPageInCodx`, `faction_idFaction`, `battlefieldRole_idBattlefieldRole`, `detachment_idDetachment`, `user_idUser`) 
    VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
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
$stmt->bindValue(14, $faction_idFaction);
$stmt->bindValue(15, $battlefieldRole_idBattlefieldRole);
$stmt->bindValue(16, NULL);
$stmt->bindValue(17, $user_idUser);

//Check if statement failed
if (!$stmt->execute())
{
    echo "Error 5: insertUserQuery failed!";
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
    echo "Error 6: getUnitQuery failed!";
    exit();
}
//safe result in new var
$newestUnitID = $row['MAX(idUnit)'];

echo "Success 0: Successfully inserted new Unit! ID_" . $newestUnitID;
$conn = null;
