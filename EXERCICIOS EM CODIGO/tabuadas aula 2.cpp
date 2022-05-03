#include "stdio.h"
#include "conio.h"
#include "iostream.h"
 
 int main (void)

{
     
     int i,n,t,j,g;
     cout<<"quantas tabuadas querem calcular\n";
     cin>>g;
     for (j=1;j<=g;j++)
     {
     cout<<"digite um numero\n";
     cin>>n;

     
     for(i=1;i<=10;i++)
     
     {
     t=n*i;
     
     cout<<n<<"x"<<i<<"="<<t<<"\n\n";
    
     }
     }
     system("pause");
}
