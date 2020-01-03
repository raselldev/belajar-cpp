#include <iostream>
#include <conio.h>

int main()

{
//inisialisasi
int x,y;
//geser kiri 2 bit
x = 32<<2;
//geser kanan 3 bit
y = 64>>3;
cout<<"32 << 2 = "<<x<<endl;
cout<<"64 >> 3 = "<<y<<endl;
getch();
return 0;



}