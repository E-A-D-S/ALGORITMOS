<HTML>
<HEAD>
<TITLE>New Document</TITLE>
</HEAD>
<BODY>
<?php
include 'conectabd1php.php';
// Set the variables for the person we want to add to the database
$cod =$_POST['cod'];
$Nome = $_POST['user'];
$alt = $_POST['alt'];
$salario = $_POST['sal'];
// Here we create a variable that calls the prepare() method of the database object
// The SQL query you want to run is entered as the parameter, and placeholders are written like this :placeholder_name
$my_Insert_Statement =$my_Db_Connection->prepare("INSERT INTO funcionario (cod, nome, alt, salario) VALUES (:cod, :Nome, :alt, :salario)");
// Now we tell the script which variable each placeholder actually refers to using the bindParam() method
// First parameter is the placeholder in the statement above - the second parameter is a variable that it should refer to
$my_Insert_Statement->bindParam(Nome, $Nome);
$my_Insert_Statement->bindParam(cod, $cod);
$my_Insert_Statement->bindParam(alt, $alt);
$my_Insert_Statement->bindParam(salario, $salario);
// Execute the query using the data we just defined
// The execute() method returns TRUE if it is successful and FALSE if it is not, allowing you to write your own messages here
if ($my_Insert_Statement->execute()) {
echo "New record created successfully";
} else {
echo "Unable to create record";
}
// At this point you can change the data of the variables and execute again to add more data to the database
//$first_Name = "John";
//$last_Name = "Smith";
//$email = "john.smith@email.com";
//$my_Insert_Statement->execute();
// Execute again now that the variables have changed
//if ($my_Insert_Statement->execute()) {
// echo "New record created successfully";
//} else {
// echo "Unable to create record";
//}

?>
</BODY>
</HTML>
