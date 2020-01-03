#include <iostream.h>
#include <conio.h>

//membuat fungsi dengan Tulis10kali
void Tulis10kali()
{
	for (int c=0;c<10;c++)
   {
   	cout <<"Aku menyukai C++" << endl;
   }
}

//fungsi utama dalam program c++
int main()
{
	//memanggil fungsi Tulis10kali untuk dieksekusi
   Tulis10kali();
   getch();
   return 0;
}
