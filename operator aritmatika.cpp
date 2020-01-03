#include <iostream>
#include <conio.h>

int main()
{
//Inisialisasi
	int A,B,x1,x2,x3,x4,x5; //Deklalari Variable

   //Pemberian Nilai Awal

   A = 10;
   B = 3;

   //proses

   x1 = A+B;
   x2 = A-B;
   x3 = A*B;
   x4 = A/B;
   x5 = A%B;


   //output
   cout<<"10+3 = "<<x1<<endl;
   cout<<"10-3 = "<<x2<<endl;
   cout<<"10*3 = "<<x3<<endl;
   cout<<"10/3 = "<<x4<<endl;
   cout<<"10%3 = "<<x5<<endl;
   getch();
}

