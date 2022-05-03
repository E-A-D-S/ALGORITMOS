<HTML>
<HEAD>
 <TITLE>New Document</TITLE>
</HEAD>
<BODY>
<?php



include 'conectaBd.php';

// Set the variables for the person we want to add to the database

$cod =$_POST['cod'];
$Nome = $_POST['user'];
$alt = $_POST['alt'];
$salario = $_POST['sal'];

Echo $cod;



$my_Insert_Statement = $my_Db_Connection->prepare("update funcionario set cod=:cod,nome=:nome,alt=:alt,salario=:salario where cod =:cod");

$my_Insert_Statement->bindParam(nome, $Nome);
$my_Insert_Statement->bindParam(cod, $cod);
$my_Insert_Statement->bindParam(alt, $alt);
$my_Insert_Statement->bindParam(salario, $salario);


if ($my_Insert_Statement->execute()) {
  echo "<br>Registro UPDATE  com Sucesso updateFuncionario.php";

 // header('location:form1.php');
} else
{
  echo "NÃO ALTEROU";
}

?>

<br>
<a href='form1.php'>    <<< Voltar >>> </a>
</BODY>
</HTML>
