  <?php

  //to reduce code duplication
  include "../db.php";

  //Needs to be = as in form in C#
  $userUsername = $_POST['userUsername'];
  $userPassword = $_POST['userPassword'];


  //Check if User is already registered
  $stmt = $conn->prepare("SELECT userUsername FROM user WHERE userUsername =?");
  //bind $userUsername to ? placeholder
  $stmt->bindParam(1, $userUsername);
  //execute query
  if ($stmt->execute())
  {
    $row = $stmt->fetch(PDO::FETCH_ASSOC);
  }
  else
  {
    echo "Error 1: getUserQuery failed!";
    exit();
  }

  //Check if user doesnt exist
  if (!$row)
  {

    //True -> Add user to table

    //variable with string which needs to be encrypted
    //source: https://www.geeksforgeeks.org/how-to-encrypt-and-decrypt-a-php-string/#:~:text=In%20PHP%2C%20Encryption%20and%20Decryption,used%20to%20encrypt%20the%20data.&text=Parameters%3A,which%20need%20to%20be%20encrypted.
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

    $stmt = $conn->prepare("INSERT INTO user (userUsername, userPassword) VALUES (?,?)");
    $stmt->bindValue(1, $userUsername);
    $stmt->bindValue(2, $encryptedPassword);

    //Check if statement failed
    if (!$stmt->execute())
    {
      echo "Error 3: insertUserQuery failed!";
      exit();
    }
  }
  else
  {
    echo "Error 2: User already exists!";
    exit();
  }

  echo "Success 0: Successfully created new user!";
  $conn = null;
