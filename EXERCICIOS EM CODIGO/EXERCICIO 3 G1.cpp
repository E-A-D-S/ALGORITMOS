# include "stdio.h"
# include "conio.h"
# include "iostream.h"

int main (void)
{
    
         
  int i,aux,j=15; // indice do vetor
  
  int v[16];// vetor com 16 posições
  cout<<"\ndigite os 16 valores\n\n";
  
  for (i=0; i<16; i++){
     cout<<"digite o vetor["<<i<<"]= ";
       cin>>v[i];  //entrada de valiores do vetor    
  }
  
  for(i=0; i<7; i++ ){
           
  aux=v[i];
  v[i]=v[j];
  v[j]=aux;
  j=j-1;
  }

for(i=0; i<16; i++){
cout<<"\n"<<v[i];
}
  
  getch();
}
