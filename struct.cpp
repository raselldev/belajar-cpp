#include <conio.h>
#include <iostream.h>
#include <stdio.h>

struct barang
{
	char nama[30];
   int jml;
}brg;

main()
{
	cout<<"Masukan Nama Barang : ";
   gets(brg.nama);
   cout<<"Masukan Jumlah Stok : ";
   cin>>brg.jml;
   cout<<endl;
   cout<<"Nama Barang: "<<brg.nama<<" Dengan Jumlah Stok: "<<brg.jml<<endl;
getch();
}
