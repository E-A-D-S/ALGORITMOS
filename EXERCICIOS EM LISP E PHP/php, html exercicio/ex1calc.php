<HTML>
<HEAD>
 <TITLE>New Document</TITLE>
</HEAD>
<BODY>
<?php

     $num= $_POST['numero'];

            if(empty($_POST['numero'])){

  echo"A variável está vazia";
  }
  elseif ($num > 10)
  {
    echo $num."eh MAIOR QUE 10";
       }
    else
    {
    echo $num. "eh MENOR QUE 10";
    }

?>

<a href="ex1form.php"> voltar</a>
</BODY>
</HTML>
