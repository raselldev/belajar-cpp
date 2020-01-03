#include <iostream.h>
#include <conio.h>

void main()
{
int A[5]={20,9,1986,200,13};
int n,hapus;
clrscr();

cout<<"Data yang lama\n";
for (n=0; n<5; n++)
{
cout<<" "<<A[n];
}
cout<<"\nData yang ingin dihapus : ";
cin>>hapus;
cout<<"\nData yang baru :\n";

for(n=hapus-1; n<5-1; n++)
{
A[n]=A[n+1];
}

for(n=0; n<4; n++)
{
cout<<" "<<A[n];
}




getch();
}
