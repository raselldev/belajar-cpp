#include <conio.h>
#include <iostream.h>

float luas (float r)
{
	float jml;
   jml = 3.14*r*r;
   return (jml);
}

float keliling (float r)
{
	float kel;
   kel = 2*3.14*r;
   return (kel);
}

float main (void)
{
	float r,y,z;
   cout<<"Masukan Jari Jari\n";
   cin>>r;

   y = luas(r);
   z = keliling(r);

   cout<<"Luas "<<y<<endl;
   cout<<"Keliling "<<z<<endl;


getch();
return (0);
}