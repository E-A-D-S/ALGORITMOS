# include "stdio.h"
# include "conio.h"
# include "iostream.h"

int main (void)
{
         
  int resto, i, contpar=0, contimpar=0; // indice do vetor
  
  int v[10];// vetor com 010 posições
  cout<<"\ndigite os 10 valores\n\n";
  
  for (i=0; i<10; i++){
            cout<<"digite o vetor["<<i<<"]= ";
            cin>>v[i];  //entrada de valiores do vetor    
            }
            
        cout<<"\n\n\n verificando valores pares e impares\n";
        
        for (i=0; i<10; i++){
                  
        resto=v[i]%2;
        
        if (resto==0){
  cout<<v[i]<<"par\n";
  contpar++;


}
else{
 cout<<v[i]<<"impar\n";
  contimpar++;
}
}
  getch();
}
