#include <iostream>
#include <conio.h>

main()
{

//deklarasi
	int nilai;

//proses
	cout<<"Masukan nilai yang anda inginkan :";
   cin>>nilai;

//pernyataan
	if (nilai %2 == 0)
   	{
   	cout<<"Nilai yang anda masukan termasuk bilangan genap";
   	}
   else
   	{
      cout<<"Nilai yang anda masukan termasuk bilangan ganjil";
      }

   getch();
}