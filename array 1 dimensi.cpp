#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
int nilai [5];
int i;
char nama[20];

cout<<"Masukan Nama Mahasiswa : ";
gets(nama);
cout<<"Masukan Nilai Ujian Mahasiswa\n";
cout<<endl;

for(i=0; i<5; i++)
{
cout<<"Nilai yang ke- "<<(i+1)<<" : ";
cin>>nilai[i];
}
cout<<endl;

cout<<"Mahasiswa yang bernama "<<nama<<" Mempunyai nilai sebagai berikut";
for(i=0; i<5; i++)
{
cout<<endl;
cout<<"'\nNilai ke-"<<(i+1)<<" : "<<nilai[i];
}
cout<<endl;
cout<<"\n\nTerima Kasih.";






getch();
}

