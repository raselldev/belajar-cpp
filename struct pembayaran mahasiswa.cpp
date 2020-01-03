#include <stdio.h>
#include <conio.h>
#include <iostream.h>

struct biaya
{
	char nama[30];
	int nim;
	int program;
	int sks;
}mahasiswa;

void main()
{
int i,n,total,sks,pokok;

cout<<"MASUKAN JUMLAH DATA MAHASISWA YANG INGIN DIINPUT : ";
cin>>n;

	for (i=0; i<n; i++)
   {
   	cout<<"DATA KE "<< (i+1) <<":"<<endl;
      cout<<"NAMA MAHASISWA	: ";
      gets(mahasiswa.nama);
      cout<<"NIM	: ";
      cin>>mahasiswa.nim;

      b:
      cout<<"Program [1=D3 2=S1]	: ";
      cin>>mahasiswa.program;
      if (mahasiswa.program  > 2)
      	{
           cout<<"SILAKAN MASUKAN ANGKA YANG BENAR\n";
           goto b;
         }
      cout<<"JUMLAH SKS	: ";
      cin>>mahasiswa.sks;
      goto c;

     c:
     cout<<"===========\n";
     cout<<"\n";
     cout<<"  OUTPUT\n";
     cout<<"\n";
     cout<<"===========\n\n";
     cout<<"NAMA MAHASISWA : "<<mahasiswa.nama<<endl;
     cout<<"NIM 			  : "<<mahasiswa.nim<<endl;
     cout<<"PROGRAM		  : "<<mahasiswa.program<<endl;

       	if (mahasiswa.program = 1)
      	{
         cout<<"BIAYA POKOK : 1750000\n";
         cout<<"BIAYA SKS : "<<(mahasiswa.sks * 85000);
         }
	      else if (mahasiswa.program = 2)
         	{
            cout<<"BIAYA POKOK : 2000000\n";
           	cout<<"BIAYA SKS : "<<(mahasiswa.sks * 105000);
            cout<<endl<<endl;

            }
            cout<<endl<<endl;
     }

getch();
}