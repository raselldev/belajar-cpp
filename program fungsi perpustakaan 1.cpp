#include <conio.h>
#include <iostream.h>

//fungsi harga sewa
int harga_sewa (char sewa)
{
	if (sewa == 'A')
   	{
      	return(2000);
      }
   else if (sewa == 'B')
   	{
      	return(2500);
      }
   else if (sewa == 'C')
   	{
      	return(1500);
      }
      return(sewa);
}

//fungsi denda sewa
int denda_sewa (int lama)
{
	int denda;
	if (lama <=7)
	{
   denda = 0;
   }
   else
   {
   denda = (lama - 7)*100;
   }
   return(denda);
}

//fungsi total
int total_harga (int harga_sewa,int jumlah, int denda_sewa)
{
int total;
total =jumlah + denda_sewa;
return(total);
}



main()
{

char nama[50],gol;
int x,y,sewa,lama,jumlah;

cout<<"Persewaan Buku Kita"<<endl;
cout<<"-------------------"<<endl;
cout<<"Nama Peminjam         : ";
cin>>nama;
cout<<"Golongan Buku (A/B/C) : ";
cin>>gol;
cout<<"Lama Peminjam         : ";
cin>>x;

sewa  = harga_sewa(gol);
lama = denda_sewa(x);
jumlah = (x/7)*sewa;




//output

clrscr();

cout<<"Perpustakaan Rakyat Pedesaan\n";
cout<<"Pembayaran Peminjaman Buku\n";
cout<<"--------------------------\n";
cout<<"Nama Peminjam "<<nama<<endl;
cout<<"Harga Sewa Buku " <<sewa<<endl;
cout<<"Lama Peminjaman "<<x<<" Hari"<<endl;
cout<<"Jumlah Bayar "<<jumlah<<endl;
cout<<"Besar Denda "<<denda_sewa(x)<<endl;
cout<<"--------------------------\n";
cout<<"Jumlah Yang Harus Dibayar " <<total_harga (sewa,jumlah,lama)<<endl;










getch();
}

