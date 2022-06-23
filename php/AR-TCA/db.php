<?php
$servername = "localhost";
$username = "id19151500_ar_tca_admin";
$password = "]91@XXcwt(s]B3w[";
$database = "id19151500_ar_tca";

try
{
  // Create connection
  $conn = new PDO("mysql:host=$servername;dbname=$database", $username, $password);
  $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
}
// Check connection
catch (PDOException $e)
{
  error_log($e->getMessage());
  exit("Connection error");
}
