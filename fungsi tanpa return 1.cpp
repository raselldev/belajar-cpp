#include <iostream>
#include <conio.h>

//membuat fungsi dengan nama tulis 10 kali

void tulis10kali()
{
for (int c=0;c<10;c++)
	{
   cout<<"AKU MENYUKAI C++"<<endl;
   }
}

//fungsi utama dalam program c++

int main()
{
//memanggil fungsi tulis 10 kali untuk dieksekusi

tulis10kali();
getch();
return 0;
}