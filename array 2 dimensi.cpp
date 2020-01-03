#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
int main ()
{
	//deklarasi array 2 dimensi
   	int MatriksA[10][10];

      //deklarasi variabel untuk looping
      int bar, kol;
      int i,j;

      //penentuan jumlah baris dan kolom
      cout<< "Masukkan jumlah baris : ";cin>>bar;
      cout<< "Masukkan jumlah kolom : ";cin>>kol;

      //isi data array matriks A
      for (i=0; i<bar; i++)
      {
      	for (j=0; j<kol; j++)
         {
         	cout<< "A ["<<(i+1)<<"] ["<<(j+1)<<"]: ";
            cin>>MatriksA[i][j];
			}
      }

      //menampilkan data dari array matriks A
      cout<<"Isi element dari Mtriks A antara lain : "<<endl;

      for (i=0; i<bar; i++)
      {
      	for (j=0; j<kol; j++)
         {
         	cout<<setw(4)<<MatriksA[i][j];
         }
      cout<<endl;
      }

      getch();
      }
