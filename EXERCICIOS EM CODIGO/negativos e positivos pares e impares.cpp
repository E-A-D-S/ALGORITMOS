#include "conio.h"
#include "iostream.h"
// fazer um programa que entra com 10 valores em um vetor
// e calcula quantos são pares e quantos são impares.
int main (void)
{
int positivo=0, negativo=0, nulo=0, resto,i,contpar=0, contimpar=0; // índice do vetor
int v[10]; // vetor com 5 posições
cout<< "DIGITE OS 10 VALORES NO VETOR\n";
for (i=0; i<10; i++){
cout<<"Digite v["<<i<<"]= ";
cin>>v[i]; // entrada dos valores no vetor
}
cout <<"\n\n\n\n\ verificando valores pares e Impares \n\n";
for (i=0; i<10; i++){
resto=v[i]%2;
if (resto ==0){
cout<<v[i]<<" PAR \n";
contpar++;
}
else{
cout<<v[i]<<" IMPAR \n";
contimpar++;
}

if (v[i]>0){
cout<<v[i];
positivo++;
}
if (v[i] <0){
cout<< v[i];
negativo++;
}

if (v[i]==0){
cout<<v[i];
nulo++;
}
}
cout<<"\n Quantidade de Par="<<contpar<<"\n";
cout<<"\n Quantidade de imPar="<<contimpar<<"\n";
cout<<"\nquantidade de numero positivo"<<"="<<positivo<<"\n";
cout<<"\nquantidade de numero negativo"<<"="<<negativo<<"\n";
cout<<"\nquantidade de numero nulo"<<"="<<nulo<<"\n";
getch();
}        
