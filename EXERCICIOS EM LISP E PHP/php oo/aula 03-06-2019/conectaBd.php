<?php
$servername = "localhost";
$database = "plp";
$username = "root";
$password = "";
$sql = "mysql:host=$servername;dbname=$database;";
$dsn_Options = [PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION];
// Create a new connection to the MySQL database using PDO, $my_Db_Connection is an object
try {
$my_Db_Connection = new PDO($sql, $username, $password, $dsn_Options);
echo "Connected successfully";
} catch (PDOException $error) {
echo 'Connection error: ' . $error->getMessage();
}
?>
