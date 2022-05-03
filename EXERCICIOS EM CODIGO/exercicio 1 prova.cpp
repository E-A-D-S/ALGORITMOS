
# include "stdio.h"
# include "conio.h"
# include "iostream.h"

int main (void)
{
         
 int i,j,num, vepar[5],veimpar[5], ip=0, ii=0; //indice par e impar
  
  
  for (i=0; i<30; i++){
            
     cout<<"\ndigite um numero["<<i<<"]= ";
     cin>>num;  //entrada de valiores do vetor    
     if(num % 2==0){
        vepar[ip]=num;
        ip++;
        if (ip >4){
            cout<<"encheu vetor par\n";
            ip=0;
            for(j=0;j<5;j++){
                cout<<"\nvVEPAR["<<j<<"]"<<vepar[j];
            }
         }
     } 
     else{
              veimpar[ii]=num;
              ii++;
              if(ii>4){
                   cout<<"encheu vetor impar\n";
                   ii=0;                 
                  
                   for(j=0;j<5;j++){
                       cout<<"\nvVEIMPAR["<<j<<"]"<<veimpar[j];
                   }
               }   
      }
         
    }     
      getch();
    
}
