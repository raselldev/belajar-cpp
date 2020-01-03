#include <conio.h>
#include <stdio.h>
#include <iostream>
void main()
{
//variable
int jam,menit,detik,hasil;

//input data
cout << "KONVERSI WAKTU" << endl;
cout << ""<<endl;
cout << "JAM:";
cin << jam;
cout << "MENIT:";
cin << menit;
cout << "DETIK:";
cin << detik;

//proses
jumlah = jam * 3600 + menit * 60 + detik * 1;


//output

cout << ""<<endl;
cout << "HASIL KONVERSI"<<endl;
cout <<"DETIK  :"<<hasil <<endl;
getch();
}
