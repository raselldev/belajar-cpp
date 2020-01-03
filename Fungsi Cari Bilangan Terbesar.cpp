#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Fungsi

float bilbesar(float x1, float x2, float x3)
{
	float bilbesar;
   if(x1>x2 && x1>x3)
   	{
      	bilbesar = x1;
      }
   else
   	if(x1<x2 && x2>x3)
      {
      	bilbesar = x2;
      }
      else
      {
      	bilbesar = x3;
      }
   return (bilbesar);
}

//program
main()
{
	float a,b,c,y;

   cout << "Mencari Bilangan Terbesar\n\n";
   cout << "Masukkan Bilangan Pertama : ";
   cin >> a;
   cout << "Masukkan Bilangan Kedua   : ";
   cin >> b;
   cout << "Masukkan Bilangan Ketiga  : ";
   cin >> c;

   y = bilbesar(a,b,c);

   cout << endl;
   printf ("Bilangan terbesar dari 3 Bilangan diatas : %3.1f", y);
   cout << endl;

   getch();
   return 0;
}
