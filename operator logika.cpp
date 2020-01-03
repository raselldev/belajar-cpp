#include <iostream>
#include <conio.h>

int main()
{
//inisialisasi
int a,b,c,d,e,f,g,h,i,j;

//proses
a = 1 && 1;
b = 1 && 0;
c = 0 && 1;
d = 0 && 0;
e = 1 || 1;
f = 1 || 0;
g = 0 || 1;
h = 0 || 0;
i = !1;
j = !0;


//output
cout<<"Logika AND"<<endl;
cout<<"1 && 1 = "<<a<<endl;
cout<<"1 && 0 = "<<b<<endl;
cout<<"0 && 1 = "<<c<<endl;
cout<<"0 && 0 = "<<d<<endl;
cout<<"\n"<<endl;

cout<<"Logika OR"<<endl;
cout<<"1 || 1 = "<<e<<endl;
cout<<"1 || 0 = "<<f<<endl;
cout<<"0 || 1 = "<<g<<endl;
cout<<"0 || 0 = "<<h<<endl;
cout<<"\n"<<endl;

cout<<"Logika NOT"<<endl;
cout<<"!1 = "<<i<<endl;
cout<<"!0 = "<<j<<endl;
cout<<"\n"<<endl;

getch();

}
