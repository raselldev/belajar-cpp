#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

int main()
{
	//deklarasi array 2 dimensi
   int matriksa[10][10],matriksb[10][10],matriksc[10][10];

   //deklarasi variabel untuk looping
   int bar,kol,i,j;

   //penentuan jumlah baris dan kolom
   cout<<"MASUKAN JUMLAH BARIS : ";
   cin>>bar;
   cout<<"MASUKAN JUMLAH KOLOM : ";
   cin>>kol;

   //isi data array matriksa
   cout<<"ISI DATA MATRIKS A :"<<endl;
   for(i=0; i<bar; i++)
   	{
      	for(j=0; j<kol; j++)
         {
         	cout<<"A ["<<(i+1)<<"] ["<<j<<"]: ";
            cin>>matriksa[i][j];
         }
      }

   cout<<"ISI DATA MATRIKS B :"<<endl;
   for(i=0; i<bar; i++)
   	{
      	for(j=0; j<kol; j++)
         {
         	cout<<"B ["<<(i+1)<<"] ["<<j<<"]: ";
            cin>>matriksb[i][j];
         }
      }


      //proses penjumlahan array
   for (i=0; i<bar; i++)
   {
   	for (j=0; j<kol; j++)
      {
      	matriksc[i][j] = matriksa[i][j] + matriksb[i][j];
      }
   }




   cout<<endl;
   for (i=0; i<bar; i++)
   {
   	for (j=0; j<kol; j++)
      {
      	cout<<setw(4)<<matriksa[i][j];
      }
      cout<<endl;
   }
    	cout<<endl;
    for (i=0; i<bar; i++)
   {
   	for (j=0; j<kol; j++)
      {
      	cout<<setw(4)<<matriksb[i][j];
      }
      cout<<endl;
   }

  	cout<<endl;
    for (i=0; i<bar; i++)
   {
   	for (j=0; j<kol; j++)
      {
      	cout<<setw(4)<<matriksc[i][j];
      }
      cout<<endl;
   }


getch();
}
