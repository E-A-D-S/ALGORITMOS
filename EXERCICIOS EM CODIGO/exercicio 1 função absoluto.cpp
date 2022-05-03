#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int absoluto(int n){
int resultado;
resultado=n;
if (n<0){
resultado=(n*-1);       
       }      
return resultado;

}
int main (void){
int x, ab;
  
cout<<"\n insira o valor de x:";
cin>>x;

ab=absoluto(x);
cout<<"\n o absoluto de "<<x<<" eh:"<<ab;

getch();
}



