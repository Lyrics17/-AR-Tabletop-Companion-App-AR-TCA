<?php

//to reduce code duplication
include "../db.php";

$terrainPiece = $_POST['terrainPiece'];

//Get terrain data 
$stmt = $conn->prepare("SELECT terrainCategory, terrainAttributes FROM terrain WHERE terrainName =?");
//bind $terrainName to ? placeholder
$stmt->bindParam(1, $terrainPiece);
//execute query
$stmt->execute();
//FETCH_ASSOC: returns each row as an array indexed by column
$row = $stmt->fetch(PDO::FETCH_ASSOC);

//check if tarrain piece exists
if (empty($row['terrainCategory']))
{
    echo "Error 1: getTerrainQuery failed!";
    exit();
}
//safe result in new vars
$terrainCategory = $row['terrainCategory'];
$terrainAttributes = $row['terrainAttributes'];

echo "Success 0: Successfully fetched terrain data! Category_" . $terrainCategory . " _Attributes_" . $terrainAttributes;
$conn = null;