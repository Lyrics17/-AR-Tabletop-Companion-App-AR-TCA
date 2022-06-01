<?php

//to reduce code duplication
include "../db.php";

$unitName = $_POST['unitName'];
$qrCode = $_POST['qrCode'];

$stmt = $conn->prepare("UPDATE `unit` SET `qrCode`= ? WHERE `unitName`=?");
$stmt->bindParam(1, $qrCode);
$stmt->bindParam(2, $unitName);

if (!$stmt->execute())
{
    echo "Error 1: updateQRCodeQuery failed!";
    exit();
}

echo "Success 0: Successfully updated QRCode_" . $qrCode;
$conn = null;