<?php

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$username = $_POST['username'];
$factionName = $_POST['factionName'];
$unitIDs = $_POST['unitIDs'];

$stmt = $conn->prepare("SELECT idUser FROM user WHERE userUsername =?");
$stmt->bindParam(1, $username);
$stmt->execute();

$row = $stmt->fetch(PDO::FETCH_ASSOC);

if (empty($row['idUser']))
{
    echo "Error 1: getUserQuery failed!";
    exit();
}

$idUser = $row['idUser'];

$stmt = $conn->prepare("SELECT `user_idUser`, `listOfUnitIds`, `factionName` FROM `armylist` WHERE user_idUser = ? AND factionName = ?");
$stmt->bindParam(1, $idUser);
$stmt->bindParam(2, $factionName);
$stmt->execute();

$row = $stmt->fetch(PDO::FETCH_ASSOC);

if (empty($row['user_idUser']))
{
    $stmt = $conn->prepare("INSERT INTO `armylist`(`user_idUser`, `listOfUnitIds`, `factionName`) VALUES (?, ?, ?);");
    $stmt->bindValue(1, $idUser);
    $stmt->bindValue(2, $unitIDs);
    $stmt->bindValue(3, $factionName);

    //Check if statement failed
    if (!$stmt->execute())
    {
        echo "Error 2: insertUserQuery failed!";
        exit();
    }
}
else //if the user has already created an army list, update it
{
    $stmt = $conn->prepare("UPDATE `armylist` SET `listOfUnitIds` = ? WHERE user_idUser = ? AND factionName = ?");
    $stmt->bindValue(1, $unitIDs);
    $stmt->bindValue(2, $idUser);
    $stmt->bindValue(3, $factionName);

    if (!$stmt->execute())
    {
        echo "Error 3: updateUserQuery failed!";
        exit();
    }
}

echo "Success 0: Successfully inserted new Army List! Units" . $unitIDs;
$conn = null;
