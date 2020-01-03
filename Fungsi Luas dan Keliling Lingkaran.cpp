#include <iostream.h>
#include <conio.h>
#include <stdio.h>

#define phi 3.14

//fungsi luas
float luas (float jari)
{
	float luas;
	luas = phi*jari*jari;
   return (luas);
}

float kell (float jari)
{
	float kell;
	kell = 2*phi*jari;
   return (kell);
}

//program utama

main()
{
	float r,L, K;

	cout << "Masukkan jari-jari lingkaran : ";
   cin >> r;

   L = luas(r);
   K = kell (r);

   printf ("Luas Lingkaran dengan jari-jari %3.1f : %3.2f ", r, L);
   cout << endl;
   printf ("Keliling Lingkaran dengan jari-jari %3.1f : %3.2f ", r, K);

   getch();
   return 0;
}


