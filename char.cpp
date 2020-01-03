#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

main()
{

char kata [50];
char kata2 [25];

cout<<"Masukan Kata : ";gets(kata);
cout<<"Panjang Kata = "<<strlen(kata)<<" karakter"<<endl;
strcpy(kata2,kata);
strlwr(kata);
cout<<"Kata yang dicopy           : "<<kata2<<endl;
cout<<"Kata menjadi huruf kecil   : "<<kata<<endl;
strupr(kata);
cout<<"Kata menjadi huruf kapital : "<<kata<<endl;
strrev(kata);
cout<<"Kata yang dibalik          : "<<kata<<endl;
getch();

}