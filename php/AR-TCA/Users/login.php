<?php
// Create connection

//to reduce code duplication
include "../db.php";

//Needs to be = as in form in C#
$userUsername = $_POST['userUsername'];
$userPassword = $_POST['userPassword'];


//Get user password for authentication
$stmt = $conn->prepare("SELECT userPassword FROM user WHERE userUsername =?");
//bind $userUsername to ? placeholder
$stmt->bindParam(1, $userUsername);
//execute query
$stmt->execute();
 
//FETCH_ASSOC: returns each row as an array indexed by column
$row = $stmt->fetch(PDO::FETCH_ASSOC);

if (empty($row['userPassword']))
{
  echo "Error 1: getUserQuery failed!";
  exit();
} 

//Login
$encryptedPassword = $row['userPassword'];

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

//check if entered password equals db (encrypted) password
if ($encryptedPassword !== $encryptedInput)
{
  echo "Error 2: Incorrect Password! input!";
  exit();
}

echo "Success 0: Successfully logged in!";
