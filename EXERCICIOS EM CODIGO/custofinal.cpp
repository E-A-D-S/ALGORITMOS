#include "stdio.h"
#include "conio.h"
#include "iostream.h"

int main (void)
{
    float custo,percentual, imposto, custofinal;
    
    cout<<"digite o valor de custo do carro";
    cin>>custo;
    
    //pegue o percentual que será 28 e divida por 100
    percentual=(custo*28)/100;
    //pegue o imposto que será de 45 e divida por 100
    imposto=(custo*45)/100;
    cout<<"\n\o custo final sera a soma do percentual com o imposto e o custo";
    
    custofinal= percentual+imposto+custo;
    
    cout<<"\n\parabens esse e seu custo final   " <<custofinal;
    getch();
}
