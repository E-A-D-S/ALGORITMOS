<!DOCTYPE html>
<html>
<meta charset="utf-8"/>
<title>Teste Orientado a Objeto</title>
<body>
<form name="formulario" method="POST" action="poo2.php">
Nome
<input type="text" name="user"> </br>
Codigo
<input type="text" name="cod"> </br>
Altura
<input type="text" name="alt"> </br>
Salario
<input type="text" name="sal"> </br>
Aumento %
<input type="text" name="per"> </br>

<input type="submit" value="Enviar"> </br>
</form>

<br>
<hr size='3' color='Blue'>



<?php

include 'conectaBd.php';


//$stmt = $pdo->query("SELECT * FROM funcionario");
//while ($row = $stmt->fetch()) {
//   echo "cod=".$row['cod']." Nome= ".$row['nome']. "<br />";
//}

?>

<table border ='1'>
<tr>
<th>codigo</th>
<th>nome Criatura</th>
<th>altura</th>
<th>salario criatura</th>
<th> Altera </th>
<th> Excluir </th>
</tr>



<?PHP

$data = $my_Db_Connection->query("SELECT * FROM funcionario")->fetchAll();
// and somewhere later:
foreach ($data as $row) {
echo "<tr><td>".$row['cod']."</td>
          <td>".$row['nome']."</td>
          <td>". $row['alt']. "</td>";
echo "</td><td>".$row['salario']. "</td>";

?>

<td>
    <form name="Altera" method="POST" action="AltFuncionario.php">
       <input type='hidden' name='cod' value='<?php echo $row['cod']?>'>
       <input type='image' src='lapis.jpg' width='30' height='30'> </td>
    </form>
</td>
<td>
      <form name="Excluir" method="POST" action="excFuncionarioFU.php">
       <input type='Hidden' name='cod' value='<?php echo $row['cod']?>'>
       <input type='image' src='excluir.jpg' width='30' height='30'> </td>
    </form>
</td></tr>
<?php
    }
?>
</table>




</body>
</html>
