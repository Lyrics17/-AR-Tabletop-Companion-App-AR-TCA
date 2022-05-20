<?php
// Create connection

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$userUsername = $_POST['userUsername'];
$userPassword = $_POST['userPassword'];

//Get user password for authentication
$stmt = $conn->prepare("SELECT userUsername FROM user WHERE userUsername =?");
//bind $userUsername to ? placeholder
$stmt->bindParam(1, $userUsername);
//execute query
$stmt->execute();

//FETCH_ASSOC: returns each row as an array indexed by column
$row = $stmt->fetch(PDO::FETCH_ASSOC);

//check if query returned a value
if (empty($row['userUsername']))
{
    echo "Error 1: getUserQuery failed!";
    exit();
}

//Reset password
//encrypt entered password
$simple_string = $userPassword;

// Store the cipher method
$ciphering = "AES-128-CTR";

// Use OpenSSl Encryption method
$iv_length = openssl_cipher_iv_length($ciphering);
$options = 0;

// Non-NULL Initialization Vector for encryption
$encryption_iv = '8147528855924896';

// Store the encryption key
$encryption_key = "FortheEMPEROR";

// Use openssl_encrypt() function to encrypt the data
$encryptedInput = openssl_encrypt(
    $simple_string,
    $ciphering,
    $encryption_key,
    $options,
    $encryption_iv
);

//Get user password for authentication
$stmt = $conn->prepare("UPDATE user SET userPassword = ? WHERE userUsername = ?");

$stmt->bindParam(1, $encryptedInput);
$stmt->bindParam(2, $userUsername);

//execute query and check if succeeded
if (!$stmt->execute())
{
    echo "Error 2: updateUserQuery failed!";
    exit();
}

echo "Success 0: Successfully reset password!";
$conn = null;
