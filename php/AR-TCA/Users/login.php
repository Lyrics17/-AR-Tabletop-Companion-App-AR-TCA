<?php
// Create connection

$servername = "localhost";
$username = "root";
$password = "";
$database = "ar-tca";

try {
  // Create connection
  $conn = new PDO("mysql:host=localhost;dbname=ar-tca;charset=utf8", $username, $password);
  $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
  echo "Connection failed: " . $e->getMessage();
}


// // Check connection
// if ($conn->connect_error) {
//   die("Connection failed: " . $conn->connect_error);
// }

//Needs to be = as in form in C#
$userUsername = ($_POST["userUsername"]);
// $userUsername = $userUsernameTemp;

if (true) {

  // die($userUsername . "Error 4: Multiple Users exists");
}
// $userUsername = strval($userUsername);
// $userUsername = "test";
$userPassword = $_POST['userPassword'];

// $stmt = $conn->prepare("SELECT * FROM user WHERE userUsername =?");
// $stmt->bind_param("s", $userUsername);
// $stmt->execute();
// $result = $stmt->get_result();
// $userData = $result->fetch_assoc();

//Check if User is already registered
// $getUserQuery = "SELECT * FROM user WHERE userUsername ='" . $userUsername . "';";

// $sql = "SELECT * FROM user WHERE userUsername =?"; // SQL with parameters
// // $sql = "SELECT * FROM `user`"; // SQL with parameters
// $stmt = $conn->prepare($sql);
// $stmt->bind_param("s", $userUsername);
// $stmt->execute();
// $result = $stmt->get_result(); // get the mysqli result
// $userData = $result->fetch_assoc(); // fetch data  

$getUserQuery = $conn->query("SELECT `userUsername`, `userPassword` FROM `user` WHERE `userUsername`='$userUsername'");
$userData = $getUserQuery->fetch(PDO::FETCH_ASSOC);

//Check if result of is empty
// if (!$userData) {

//   die($userUsername . "Error 4: Multiple Users exists");
// }

//Login
// $userData = mysqli_fetch_assoc($result);
$encryptedPassword = $userData['userPassword'];
$temp = $userData['userUsername'];

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
if ($encryptedPassword !== $encryptedInput) {
  echo "TEMP:" . $temp . "
   Error 5: Incorrect Password! input: " . $encryptedInput . ";dbPW: " . $encryptedPassword;
  exit();
}

echo "0 Data:" . $temp . " " . $encryptedInput . " " . $encryptedPassword;//process succeeded
