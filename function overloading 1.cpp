#include <iostream>
#include <conio.h>

int lain(int angka)
{
	return angka;
}
double lain(double angka)
{
	return angka;
}
float lain(int angka,float bil)
{
	return (angka+bil);
}

main()
{
cout<<lain(34.66)<<endl;
cout<<lain(12,12.5)<<endl;
cout<<lain(76)<<endl;

getch();
}
