#include <conio.h>
#include <iostream>
#include <stdio.h>

struct orang
{
	char nama[30];
   short umur;

};

main()
{
orang org[3];
int i;
for (i=0; i<=2; i++)
{
cout<<" MASUKAN NAMA : ";
gets(org[i].nama);
cout<<" MASUKAN UMUR : ";
cin>>org[i].umur;
}
for(i=0; i<=2; i++)
{
cout<<" DATA KE "<<(i+1)<<" Bernama " <<org[i].nama<<" dengan umur "<<org[i].umur<< " tahun " <<endl;
}
getch();
}