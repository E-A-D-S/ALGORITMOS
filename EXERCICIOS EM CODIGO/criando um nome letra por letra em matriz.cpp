#include "stdio.h"
#include "conio.h"
#include "iostream.h"
#include "windows.h"
#include "stdlib.h"
void gotoxy(int x, int y){
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
int main (void)
{
char nome[20];
int i, a, c, l, y;
cout<< "digite um nome : ";
cin>>nome;
gotoxy(5,7);
cout<<"tamanho"<<strlen(nome);

l=10; c=10;
for(i=0;i<strlen(nome); i++){
     y=l+i;
     gotoxy(c,y);
     cout<<nome[i];
     
     }    
     
          
getch();
}
