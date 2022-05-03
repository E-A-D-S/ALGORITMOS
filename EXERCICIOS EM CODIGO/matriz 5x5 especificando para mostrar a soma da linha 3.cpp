#include "stdio.h"
#include "conio.h"
#include "iostream.h"
#include "windows.h"
#include "stdlib.h"
void gotoxy(int x, int y){
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

int main(void)
{
int m[5][5], l, c, soma=0;//definindo uma matriz de 3,3 e criando uma variavel L pra linha e C pra coluna

//(PRIMEIRA PARTE PARA LER AS COISAS

   for(l=0; l<5; l++){//fizemos um for para ler os numeros das linhas de 0 a 2(total 3)
    for(c=0; c<5; c++){//fizemos um for pra ler os numeros das colunas de 0 a 2(total 3)
      cout<<"\t\t M["<<l<<"]["<<c<<"]=";//imprimirmos para ler a matriz [l][c] sendo linha e coluna (\t\t) serve pra ESPAÇAR LINHA COMO UM TAB 
       cin>>m[l][c];//damos entrada nos valores a matriz[l][c] 
       }
        cout<<"\n\n";// só pra quebrar linha
       }
//(SEGUNDA PARTE PARA ESCREVER OS RESULTADOS E ORDEM DOS RESULTADOS
     for(c=0; c<5; c++){//fizemos um for pra escrever as colunas da matriz
     soma=soma+m[3][c];
      }
       cout<<"|\n";//só pra quebrar linha 
       cout<<"\n"<<soma<<"\n";
      system("pause");//usado para finalizar qualquer processo               
      }
