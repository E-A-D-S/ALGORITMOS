<!DOCTYPE html>
<html>
<meta charset="utf-8"/>
<title>Teste Orientado a Objeto</title>
<body>

<?php

include 'conectaBd.php';
$cod =$_POST['cod'];

Echo $cod;


//$my_Insert_Statement->bindParam(cod, $cod);
$data = $my_Db_Connection->query("SELECT * FROM funcionario where cod=$cod")->fetchAll();


foreach ($data as $row) {


?>
<form name="formulario" method="POST" action="updateFuncionario.php">
Nome
<input type="text" name="user" value="<?php echo $row['nome'];  ?>" > </br>
Codigo
<input type="text" name="cod" value="<?php echo $row['cod'];  ?>"  > </br>
Altura
<input type="text" name="alt" value="<?php echo $row['alt'];  ?>" > </br>
Salario
<input type="text" name="sal" value="<?php echo $row['salario'];  ?>"> </br>


<input type="submit" value="Enviar"> </br>
</form>

<?php
}
?>
<br>
<hr size='3' color='Blue'>



<br>
<a href='form1.php'>    <<< Voltar/Cancelar >>> </a>





</body>
</html>


