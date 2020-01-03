#include <conio.h>
#include <iostream.h>

void main()
{
int A[100];
int n,b,maks,min;

cout<<"Jumlah data : ";
cin>>b;

for (n=0; n<b; n++)
{
	cout<<"data ke - "<<(n+1)<<" : ";
   cin>>A[n];
}
cout<<endl;

for (n=0; n<b; n++)
{
	if (A[n] > maks)
   {
   	maks = A[n];
   }


   if (A[n] < min)
   {
   	min = A[n];
   }
}

cout<<"Nilai Terkecil : "<<min<<endl;
cout<<"Nilai Terbesar : "<<maks<<endl;













getch();
}