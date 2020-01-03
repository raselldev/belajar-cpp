#include <iostream.h>
#include <conio.h>

int lain (int angka)
{
	return angka;
}

double lain (double angka)
{
	return angka;
}

float lain (int angka, float bil)
{
	return (angka+bil);
}

//program utama
main()
{
	cout << lain (34.66) << endl;
   cout << lain (23,12.5) << endl;
   cout << lain (76) << endl;

   getch();
}

