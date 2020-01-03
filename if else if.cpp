#include <iostream>
#include <conio.h>

main()
{

//deklarasi
int pertama,kedua;

//proses
cout<<"Masukan Bilangan pertama : ";
cin>>pertama;
cout<<"Masukan Bilangan kedua : ";
cin>>kedua;

//pernyataan
if (pertama > kedua)
{
cout<<"Bilangan terbesar adalah bilangan pertama yaitu "<<pertama;
}
else if (pertama < kedua)
{
cout<<"Bilangan terbesar adalah bilangan kedua yaitu "<<kedua;
}
else
{
cout<<"Bilangan tersebut sama besar ";
}

getch();
}
