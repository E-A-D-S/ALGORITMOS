<HTML>
<HEAD>
 <TITLE>New Document</TITLE>
</HEAD>
<BODY>
<?php



include 'conectaBd.php';

// Set the variables for the person we want to add to the database
$cod =$_POST['cod'];

Echo $cod;



$my_Insert_Statement =
$my_Db_Connection->prepare("delete from funcionario where cod =:cod");



$my_Insert_Statement->bindParam(cod, $cod);

if ($my_Insert_Statement->execute()) {
  echo "<br>Registro Excluido com Sucesso excFuncionarioFU.php";

 // header('location:form1.php');
} else
{
  echo "NÃO Excluiu";
}

?>

<br>
<a href='form1.php'>    <<< Voltar >>> </a>
</BODY>
</HTML>
