#include <conio.h>
#include <iostream>
void main()
{
	//deklarasi variable
	char nm_brg[25];
   int hrg_sat, jml_brg, ttl_hrg;
   float diskon, pembayaran;

   //input data
   clrscr();
   cout<<"====================="<<endl;
   cout<<"==PEMBAYARAN BARANG=="<<endl;
   cout<<"====================="<<endl;
   cout<<"Masukan Nama Barang 	 :";
   cin>>nm_brg;
   cout<<"Masukan Harga Satuan 	 :";
   cin>>hrg_sat;
   cout<<"Masukan Jumlah Barang 	 :";
   cin>>jml_brg;

   //proses perhitungan
	ttl_hrg = hrg_sat * jml_brg;
   diskon = 0.1 * ttl_hrg;
   pembayaran = ttl_hrg - diskon;

   //output data

   cout<<"Total Harga 				 :";
   cout<<ttl_hrg<<endl;
   cout<<"Total Diskon 				 :";
   cout<<diskon<<endl;
   cout<<"Biaya yang Harus Dibayar :";
   cout<<pembayaran<<endl;
   getch();
}