# include "stdio.h"
# include "conio.h"
# include "iostream.h"

int main (void)
{
float n1,n2,media,g1,g2,i;

for (i=1;i<+10;i++)
{
cout<<"\n\n aluno "<<i<<"\n\n insira sua primeira nota\n";
cin>>n1;

cout<<"insira sua segunda nota\n";
cin>>n2;

g1=n1*1;
g2=n2*2;
media=(g1+g2)/3;

cout<<"media:"<<media;


if (media<=6)
{
cout<<"\nreprovado\n";
}

if(media>=7)
{
cout<<"\naprovado\n";
}

}
system("pause");
}
