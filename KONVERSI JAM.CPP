#include <conio.h>
#include <iostream>
void main()
{
//variable
int jam,menit,detik,sisa;

//input data
cout << "KOVERSI WAKTU" << endl;
cout << "_____________" << endl;
cout << "" << endl;
cout << "WAKTU YANG DIBERIKAN :";
cin>>detik;
cout << ""<<endl;

//proses
jam = detik/3600;
sisa = detik%3600;
menit = sisa/60;
detik = sisa%60;

//output
cout << "HASIL KONVERSI"<<endl;
cout <<"JAM  :"<<jam <<endl;
cout <<"MENIT:"<<menit <<endl;
cout <<"DETIK:"<<detik <<endl;
cout << ""<<endl;
cout << "FORMAT PENULISAN LAIN"<<endl;
cout <<"JAM:" <<jam;
cout <<" MENIT:" <<menit;
cout <<" DETIK:" <<detik;
getch();
}
