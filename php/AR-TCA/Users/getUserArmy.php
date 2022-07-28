<?php

//to reduce code duplication
include "../db.php";

$factionName = $_POST['factionName'];

//Get terrain data 
$stmt = $conn->prepare("SELECT listOfUnitIds FROM armylists WHERE factionName = ?");
//bind $terrainName to ? placeholder
$stmt->bindParam(1, $factionName);
//execute query
$stmt->execute();

$row = $stmt->fetch(PDO::FETCH_ASSOC);

if (empty($row['listOfUnitIds']))
{
    echo "Error 1: getUserArmy failed!";
    exit();
}

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

echo "Success 0: Successfully fetched User Army Units!" . $unitNames . "|" . $unitPowerCost . "%" . $unitPointCost;
$conn = null;
