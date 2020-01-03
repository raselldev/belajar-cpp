#include <iostream>
#include <conio.h>

int main()
{
	//inisialisasi
   int A; //Deklalari Variable
   A = 5; //Pemberian Nilai Awal

   cout<<"Contoh melakukan pre-increment"<<endl;
   cout<<"Nilai A awal adalah: "<<A<<endl;
   cout<<"Nilai ++A adalah: "<<++A<<endl;
   cout<<"Nilai A akhir adalah: "<<A<<endl;
   cout<<"\n"<<endl;

      cout<<"Contoh melakukan post-increment"<<endl;
   cout<<"Nilai A awal adalah: "<<A<<endl;
   cout<<"Nilai A++ adalah: "<<A++<<endl;
   cout<<"Nilai A akhir adalah: "<<A<<endl;
   cout<<"\n"<<endl;

      cout<<"Contoh melakukan pre-decrement"<<endl;
   cout<<"Nilai A awal adalah: "<<A<<endl;
   cout<<"Nilai ++A adalah: "<<--A<<endl;
   cout<<"Nilai A akhir adalah: "<<A<<endl;
   cout<<"\n"<<endl;

      cout<<"Contoh melakukan post-decrement"<<endl;
   cout<<"Nilai A awal adalah: "<<A<<endl;
   cout<<"Nilai ++A adalah: "<<A--<<endl;
   cout<<"Nilai A akhir adalah: "<<A<<endl;
   cout<<"\n"<<endl;
   

   getch();

}