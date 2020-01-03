#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main()
{
int A[100];
int mid,final,n,b,rata;

char nama[20];


cout<<"Jumlah data : ";
cin>>b;

for (n=0; n<b; n++)
{
	cout<<"data ke - "<<(n+1)<<endl;

   cout<<"Nama Siswa : ";
   gets(nama);

   cout<<"Nilai Midtest : ";
   cin>>mid;

   cout<<"Nilai Final : ";
   cin>>final;
}
cout<<endl;


cout<<"---------------------------------------------"<<endl;
cout<<"NO NAMA SISWA NILAI NILAI HASIL"<<endl;
cout<<"Midtest Final Ujian"<<endl;
cout<<"---------------------------------------------"<<endl;

for (n=0; n<b; n++)
{
cout<<n+1<<"      "<<nama<<"      "<<mid<<"      "<<final<<"      "<<(mid+final)/2<<endl;
}










getch();
}
