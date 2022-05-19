<?php
// Create connection
$conn = new mysqli('localhost', 'root', '', 'ar-tca');

// Check connection
if ($conn->connect_error) {
  die("Connection failed: " . $conn->connect_error);
}

//Needs to be = as in form in C#
$userUsername = $_POST['userUsername'];
$userPassword = $_POST['userPassword'];

//Check if User is already registered
$getUserQuery = "SELECT userUsername FROM user WHERE userUsername = '" . $userUsername . "' AND userPassword= '" . $userPassword  . "';";
$result = mysqli_query($conn, $getUserQuery) or die("Error 1: getUserQuery failed!");

//Check if result of is empty
if (mysqli_num_rows($result) > 0) {
  echo "Error 2: User already exists";
  exit();
}

//Add user to table
// variable with string which needs to be Encrypted
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
$encryption = openssl_encrypt(
  $simple_string,
  $ciphering,
  $encryption_key,
  $options,
  $encryption_iv
);

//store encyrpted data into variable for query
$encryptedPassword = $encryption;

$insertUserQuery = "INSERT INTO user (userUsername, userPassword) VALUES ('" . $userUsername . "', '" . $encryptedPassword . "');";
mysqli_query($conn, $insertUserQuery) or die("Error 3: insertUserQuery failed!");

echo ("0"); //-> see Registration.cs