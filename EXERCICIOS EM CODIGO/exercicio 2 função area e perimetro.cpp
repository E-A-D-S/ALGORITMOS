#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
float area(float x){
      float c;
      c= 3.14*(pow(x,2));
      return (c);
      }
      
float perimetro(float y){
      float k;
      k=2*3.14*y;
      return (k);
      }      

int main (void){
float n, a, p;
cout<<"insira um numero";
cin>>n;
while (n>=0){ 
 a=area(n); 
 p=perimetro(n);
 cout<<"a area sera de "<<a<<" e o perimetro sera de " <<p<<"\n"; 
system("PAUSE");
}
      
getch();
}
