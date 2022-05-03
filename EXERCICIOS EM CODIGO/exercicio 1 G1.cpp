# include "stdio.h"
# include "conio.h"
# include "iostream.h"

int main (void)
{
         
  int x,y,s, i; // indice do vetor
  
  int v[12];// vetor com 12 posições
  cout<<"\ndigite os 12 valores\n\n";
  
  for (i=0; i<12; i++){
     cout<<"digite o vetor["<<i<<"]= ";
       cin>>v[i];  //entrada de valiores do vetor    
  }
   cout<<"\ninsira o valor do vetor x\n";
    cin>>x;
     
  
  
   cout<<"\n insira o valor do vetor y \n";
    cin>>y;
   
            
            
   s=v[x]+v[y];
   cout<<"soma =";
   cout<<s;
  getch();
}

