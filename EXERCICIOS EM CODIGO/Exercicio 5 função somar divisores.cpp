#include "conio.h"
#include "stdio.h"
#include "iostream"
using namespace std;
int cont=0;
int leia_positivo (){
  while(cont<=0){
   cout<<"\n Digite qualquer numero:\n ";
   cin>>cont;
}
 }
int Soma_dos_divisores(){
 int i, soma=0;
  for(i=1; i<cont; i++){
  if(cont%i==0){
   soma=soma+i;	
}
 }
	return soma;
}
int main (void){
	int i,s_s_d;
for(i=0; i<5; i++){
  leia_positivo();
  s_s_d=Soma_dos_divisores();
  cout<<"A soma dos divisores de "<<cont<<" e: "<<s_s_d;
	cont=0;
}	
getch();
}

