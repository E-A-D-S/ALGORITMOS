<HTML>
<HEAD>
<TITLE>New Document</TITLE>
</HEAD>
<BODY>
<?php
include 'conectabddepartamentos.php';
// Set the variables for the person we want to add to the database
$nome_departamento =$_POST['nomedepartamento'];
$id_departamento = $_POST['iddepartamento'];
// Here we create a variable that calls the prepare() method of the database object
// The SQL query you want to run is entered as the parameter, and placeholders are written like this :placeholder_name
$my_Insert_Statement =$my_Db_Connection->prepare("INSERT INTO departamento_2_tabelas (nome_departamento, id_departamento) VALUES (:nome_departamento, :id_departamento)");
// Now we tell the script which variable each placeholder actually refers to using the bindParam() method
// First parameter is the placeholder in the statement above - the second parameter is a variable that it should refer to
$my_Insert_Statement->bindParam(nome_departamento, $nome_departamento);
$my_Insert_Statement->bindParam(id_departamento, $id_departamento);
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
