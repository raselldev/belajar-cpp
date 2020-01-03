      #include <iostream>
#include <conio.h>

int main()

{

//deklarasi
	int x;
   int y = 1;

   cout<<"MASUKAN ANGKA YANG INGIN DIJADIKAN OPERAND : ";
   cin>>x;
   cout<<endl;

   cout<<x<<" | "<<y<<" = "<<(x|y)<<endl;
   cout<<x<<" & "<<y<<" = "<<(x&y)<<endl;
   cout<<x<<" ^ "<<y<<" = "<<(x^y)<<endl;
   cout<<x<<" << "<<y<<" = "<<(x<<y)<<endl;
   cout<<x<<" >> "<<y<<" = "<<(x>>y)<<endl;

getch();



}