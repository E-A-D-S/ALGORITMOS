<!DOCTYPE html>
<html>
<head>
<title>Teste orientado a objeto</title>
</head>
<body>
<?php
error_reporting(0);
// criação da Classe
class Pessoa{
var $codigo;
var $nome;
var $altura;
var $idade;
var $salario;
var $peso;
var $tamanho_roupa;
var $aniversario;
// métodos da classe
function ListaPessoa(){
echo '<br> codigo '.$this->codigo;
echo '<br> Nome '.$this->nome;
echo '<br> idade '.$this->idade.' anos';
echo '<br>Salario:'.$this->salario;
echo '<br>peso:'.$this->peso;
echo '<br>tamanho_roupa:'.$this->tamanho_roupa;
echo '<br>aniversario:'.$this->aniversario;
}
// métodos da classe
function ImprimeSalario(){
echo '<br>Salario:'.$this->salario;
}
// métodos da classe
function AumentaSalario($per){
echo "<br> Aumento de $per %<br>";
$this->salario = $this->salario * (1 + ($per /100));
}
}
//intância novo Objeto
$user = new Pessoa;
$user->codigo=$_POST['cod'];
$user->nome = $_POST['user'];
$user->altuta = $_POST['alt'];
$user->idade = $_POST['id'];
$user->salario = $_POST['sal'];
$user->peso = $_POST['pes'];
$user->tamanho_roupa = $_POST['tam'];
$user->aniversario = $_POST['ani'];
$per=$_POST['per'];
//uso dos atributos da objeto e classe
echo $user->nome." tem ".$user->idade." anos";
//chamadas de metodo com objeto
$user->ListaPessoa();
$user->ImprimeSalario();
$user->AumentaSalario($per);
Echo "<br> NOVO SALARIO";
$user->ImprimeSalario();

?>
<a href="form1pedro.php"> Volta </a>
</body>
</html>
