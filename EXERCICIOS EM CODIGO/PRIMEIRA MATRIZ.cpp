# include "stdio.h"
# include "conio.h"
# include "iostream.h"

int main(void)
{
int m[3][3], l, c;//definindo uma matriz de 3,3 e criando uma variavel L pra linha e C pra coluna

//(PRIMEIRA PARTE PARA LER AS COISAS

   for(l=0; l<3; l++){//fizemos um for para ler os numeros das linhas de 0 a 2(total 3)
    for(c=0; c<3; c++){//fizemos um for pra ler os numeros das colunas de 0 a 2(total 3)
      cout<<"\t\t M["<<l<<"]["<<c<<"]=";//imprimirmos para ler a matriz [l][c] sendo linha e coluna (\t\t) serve pra ESPAÇAR LINHA COMO UM TAB 
       cin>>m[l][c];//damos entrada nos valores a matriz[l][c] 
       }
        cout<<"\n\n";// só pra quebrar linha
       }
//(SEGUNDA PARTE PARA ESCREVER OS RESULTADOS E ORDEM DOS RESULTADOS
       
    for(l=0; l<3; l++){//fizemos um for pra escrever as linhas da matriz
     for(c=0; c<3; c++){//fizemos um for pra escrever as colunas da matriz
      cout<<"|"<<m[l][c]<<"\t";//imprimimos a barra para separar os resultados e os resultados das linhas e colunas da matriz
      }
       cout<<"|\n";//só pra quebrar linha 
      }
      system("pause");//usado para finalizar qualquer processo               
      }
