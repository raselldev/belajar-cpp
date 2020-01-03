#include <conio.h>
#include <iostream.h>

int bil (int x1, int x2, int x3)
{
	int bsr;
	if(x1>x2 && x1>x3)
   	{
      bsr=x1;
      }
   else
   	if(x2>x1 && x2>x3)
      {
      bsr=x2;
      }
   	else
      {
      bsr=x3;
      }
      return(bsr);

}

int main (void)
{
int x,y,z,a;

cout<<"Masukan Bilangan 1  ";
cin>>x;
cout<<"Masukan Bilangan 2  ";
cin>>y;
cout<<"Masukan Bilangan 3  ";
cin>>z;

a=bil(x,y,z);

cout<<"Bilangan terbesar "<<a<<endl;
getch();
}
