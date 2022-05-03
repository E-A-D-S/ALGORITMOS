#include "conio.h"
#include "iostream.h"
// fazer um programa que entra com 40 valores em um vetor

int main (void)
{
int i; // índice do vetor
int v[5]; // vetor com 40 posições
cout<< "DIGITE OS 40 VALORES NO VETOR\n";
for (i=0; i<5; i++){
cout<<"Digite v["<<i<<"]= ";
cin>>v[i]; // entrada dos valores no vetor
}

for (i=0; i<5; i++){
  v[i] = v[i] + (v[i-1]);
  
    cout<<"\n no valor obtido eh v ["<<i<<"]\n"<<v[i];
}


getch();
}        

