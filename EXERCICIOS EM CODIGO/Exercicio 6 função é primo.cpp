#include "conio.h"
#include "stdio.h"
#include "iostream"
using namespace std;
int numeroprimo(int i){
int cont=0, j;
for(j=2; j<i; j++){
	if(i%j==0){
		cont=1;
}
}
return cont;
}
int main (void){
 int i,cont;
 for(i=2;i<=100;i++){
 cont=numeroprimo(i);
  if (cont==0){
 cout<<"\n o valor de "<<i<<" esse eh primo\n";
}
}	
getch();
}

