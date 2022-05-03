#include "conio.h"
#include "stdio.h"
#include "iostream"
using namespace std;
int cont=0;
int leia_positivo (){
  while(cont<=0){
   cout<<"\n digite qualquer numero:\n ";
    cin>>cont;
}
 }
int somatotal (){
int i,soma=0;
  for(i=1; i<cont; i++){
   soma= soma+i;
}
	return soma;
}
int main (void)
{
	int i, soma;
	
	for(i=1; i<5; i++){
	 leia_positivo();
      soma=somatotal();
       cout<<"\n a sua soma dos inteiros de 1 ate "<<cont<<" e: "<<soma;
      cont=-1;
}
getch();
}

