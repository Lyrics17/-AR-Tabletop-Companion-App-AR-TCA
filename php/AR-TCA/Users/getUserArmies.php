<?php

//to reduce code duplication
include "../db.php";

$username = $_POST['username'];

//Get terrain data 
$stmt = $conn->prepare("SELECT factionName, listOfUnitIds FROM armylists, user WHERE user_idUser = user.idUser AND user.userUsername = ?");
//bind $terrainName to ? placeholder
$stmt->bindParam(1, $username);
//execute query
$stmt->execute();

$row = $stmt->fetchAll();

//check if tarrain piece exists
if (empty($row))
{
    echo "Error 1: getUserArmies failed!";
    exit();
}

/*
row[0][0] == first column of the first row -> SpaceMarines, row[1][0] == second column of the first row -> Necrons
row[0][1] == second column of the first row -> units of Faction, row[1][1] == second column of the second row -> units of Faction
*/

$factionsString = "";
$unitIdsString = "";

foreach ($row as $row)
{
    $factionsString .= $row['factionName'] . "_";
    $unitIdsString .= $row['listOfUnitIds'] . "%";
}

$factionsString =  substr($factionsString, 0, -1);
$unitIdsString =  substr($unitIdsString, 0, -1);

echo "Success 0: Successfully fetched User Armies!" . $factionsString . "|" . $unitIdsString;
$conn = null;
