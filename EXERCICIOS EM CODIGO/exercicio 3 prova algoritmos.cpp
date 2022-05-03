# include "stdio.h"
# include "conio.h"
# include "iostream.h"

int main (void)
{
int i; // indice do vetor
int v1[10], v2[10], r[i];//vetor com 10 posições
cout<<"digite os valores do vetor\n";

for(i=0; i<10; i++){
cout<<"digite v ["<<1<<"]= ";
cin>>v1[i];//entradfa dos valores no vetor
}

for(i=0; i<10; i++){
cout<<"digite v2["<<i<<"]= ";
cin>>v2[i]; //entrada dos valores no vetor
}

for(i=0; i<10; i++){
r[i]=v1[i]*v2[i];
cout<<"\n\nresultado da multiplicado= "<<r[i]<<" resultado v1= "<<v1[i]<<" resultado v2= "<<v2[i];
}
getch();
}
