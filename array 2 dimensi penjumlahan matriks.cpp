#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
int main ()
{
	//deklarasi array 2 dimensi
   	int MA[10][10], MB[10][10], MC[10][10];

      //deklarasi variabel untuk looping
      int bar, kol;
      int i,j;

      //penentuan jumlah baris dan kolom
      cout<< "Masukkan jumlah baris : ";cin>>bar;
      cout<< "Masukkan jumlah kolom : ";cin>>kol;

      //isi data array matriks A
      cout<<"Isi Data MAtriks A: "<<endl;

      for (i=0; i<bar; i++)
      {
      	for (j=0; j<kol; j++)
         {
         	cout<< "A ["<<(i+1)<<"] ["<<(j+1)<<"]: ";
            cin>>MA[i][j];
			}
      }

      for (i=0; i<bar; i++)
      {
      	for (j=0; j<kol; j++)
         {
         	cout<< "A ["<<(i+1)<<"] ["<<(j+1)<<"]: ";
            cin>>MB[i][j];
			}
      }

      //menampilkan data dari array matriks A
      cout<<"Isi element dari Mtriks A antara lain : "<<endl;

      cout<<"MAtriks A: "<<endl;
      for (i=0; i<bar; i++)
      {
      	for (j=0; j<kol; j++)
         {
         	cout<<setw(4)<<MA[i][j];
         }
      cout<<endl;
      }

      cout<<"MAtriks B: "<<endl;
      for (i=0; i<bar; i++)
      {
      	for (j=0; j<kol; j++)
         {
         	cout<<setw(4)<<MB[i][j];
         }
      cout<<endl;
      }

      //Proses penjmlahan matriks A dan matriks B
      for (i=0; i<bar; i++)
      {
      	for(j=0; j<kol; j++)
         {
         	MC[i][j] = MA[i][j] + MB[i][j];
         }
      }

      //Menampilkan hasil penjumlahan 2 buah matriks
      cout<<"Hasil penjumlahan: "<<endl;
      for (i=0; i<bar; i++)
      {
      	for (j=0; j<kol; j++)
         {
         	cout<<setw(4)<<MC[i][j];
         }
      cout<<endl;
      }


      getch();
      }
