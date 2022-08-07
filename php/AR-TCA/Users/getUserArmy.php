<?php

//to reduce code duplication
include "../db.php";

$username = $_POST['username'];

//Get listofUnits data 
$stmt = $conn->prepare("SELECT `idUser` FROM `user` WHERE `userUsername` = ?;");
//bind $factionname to ? placeholder
$stmt->bindParam(1, $username);
//execute query
$stmt->execute();

$row = $stmt->fetch(PDO::FETCH_ASSOC);

$idUser = $row['idUser'];

$factionName = $_POST['factionName'];

//Get listofUnits data 
$stmt = $conn->prepare("SELECT listOfUnitIds FROM armylist WHERE factionName = ? AND `user_idUser` = ?;");
//bind $factionname & $idUser to ? placeholder
$stmt->bindParam(1, $factionName);
$stmt->bindParam(2, $idUser);
//execute query
$stmt->execute();

$row = $stmt->fetch(PDO::FETCH_ASSOC);

if (empty($row['listOfUnitIds']))
{
    echo "Error 1: getUserArmy failed!";
    exit();
}

$listOfUnitIdsString = $row['listOfUnitIds'];
$listOfUnitIdsArray = explode("_", $row['listOfUnitIds']);

$unitNames = "";
$unitPowerCost = 0;
$unitPointCost = 0;

for ($i = 0; $i < count($listOfUnitIdsArray); $i++)
{
    $stmt = $conn->prepare("SELECT unitName, unitPowerCost ,unitPointCost FROM unit WHERE idUnit =  ?");
    //bind $terrainName to ? placeholder
    $stmt->bindParam(1, $listOfUnitIdsArray[$i]);
    //execute query
    $stmt->execute();

    $row = $stmt->fetch(PDO::FETCH_ASSOC);

    if (!empty($row['unitName']))
    {
        $unitNames .= $row['unitName'] . "_";
        $unitPowerCost += $row['unitPowerCost'];
        $unitPointCost += $row['unitPointCost'];
    }
}

$unitNames = substr($unitNames, 0, -1);

echo "Success 0: Successfully fetched User Army Units!" . $unitNames . "|" . $unitPowerCost . "%" . $unitPointCost . "&" . $listOfUnitIdsString;
$conn = null;
