#include <iostream.h>
#include <conio.h>

int jml2bil (int x1, int x2) //fungsi standard
{
int jml;
jml = x1 + x2;
return(jml);
}

int main(void)
{
int y,a,b;

cout<<"Masukan 2 Bilangan\n";
cin>>a>>b;

y = jml2bil(a,b);

cout<<"a is "<<a<<endl;
cout<<"b is "<<b<<endl;
cout<<"y is "<<y<<endl;

getch();
return(0);
}
