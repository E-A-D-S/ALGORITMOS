#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
int maior_numero(int x, int y){
if (x==y){
return 0;
}              
else{
if (x>y){
 return x;
 }
 else{
 return y;
}                  
}
}
int main(void){
    
int x, y, c, i;

for (i=0; i<5; i++){
    cout<<"\n \n digite um par de valores positivos:\n";
    cin>>x;
    cin>>y;
    
c=maior_numero(x,y);

if(c==0){
cout<<"\n os valores sao iguais";
}
else 
{
cout<<"\n o maior valor do par eh: "<<c;         
}

}
getch();

}    
