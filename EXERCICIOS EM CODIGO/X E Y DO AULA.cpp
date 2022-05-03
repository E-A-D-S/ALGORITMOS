#include "stdio.h"
#include "conio.h"
#include "iostream.h"
#include "windows.h"
#include "stdlib.h"
void gotoxy(int x, int y){
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
int main (void)
{
int m[3][3],l,c, lin,col, pos;
lin=1, col=1;
for(l=0;l<3;l++){ 
for(c=0;c<3;c++){
gotoxy(col,lin+l);                    
col=col+15; 
cout<<lin+l<<"m["<<l<<","<<c<<"]"; 
cin>>m[l][c];
}
col=1;
cout<<"\n";
}
gotoxy(3,11);
cout<<"0         1         2";
lin=12, col=1, pos=1;
for(l=0;l<3;l++){ 
for(c=0;c<3;c++){
gotoxy(col,lin+l);
col=col+10; 
cout<<pos+l<<"|"<<m[l][c];
}
col=1;
cout<<"\n";
}


getch();
}
