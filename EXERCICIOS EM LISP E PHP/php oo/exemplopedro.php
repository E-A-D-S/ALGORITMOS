<?php
// criação da Classe
class Pessoa{
var $codigo;
var $nome;
var $altura;
var $idade;
var $salario;
// métodos da classe
function ListaPessoa(){
echo '<br> codigo '.$this->codigo;
echo '<br> Nome '.$this->nome;
echo '<br> idade '.$this->idade.' anos';
echo '<br>Salario:'.$this->salario;
}
// métodos da classe
function ImprimeSalario(){
echo '<br>Salario:'.$this->salario;
}
// métodos da classe
function AumentaSalario($per){
$this->salario = $this->salario * (1 + ($per /100));
}
}

//intância novo Objeto
$pedro = new Pessoa;
$pedro->codigo = 10;
$pedro->nome = "Pedro Oliveira";
$pedro->altura = 1.76;
$pedro->idade = 28;
$pedro->salario = 2500;

//uso dos atributos da objeto e classe
echo $pedro->nome." tem ".$pedro->idade." anos";

//chamadas de metodo com objeto
$pedro->ListaPessoa();
$pedro->ImprimeSalario();
$pedro->AumentaSalario(3);
Echo "<br> NOVO SALARIO";
$pedro->ImprimeSalario();

//intancia novo Objeto
$Deise = new Pessoa;
$Deise->codigo = 12;
$Deise->nome = "Deise Santos";
$Deise->altura = 1.65;
$Deise->idade = 27;
$Deise->salario = 10000;
$Deise->ListaPessoa();
$Deise->AumentaSalario(20);
Echo "<br> NOVO SALARIO";
$Deise->ImprimeSalario();



?>
