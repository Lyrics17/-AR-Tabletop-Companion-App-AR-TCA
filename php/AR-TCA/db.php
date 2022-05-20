<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "ar-tca";

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
