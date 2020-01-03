#include <iostream>
#include <conio.h>

main()
{
	//deklarasi
   int a;

   //input
   cout<<"MASUKAN NOMOR HARI(1-7) : ";
   cin>>a;

   //swich case
   switch (a)
   {
   	case 1:
      	cout<<"HARI KE "<<a<<" ADALAH HARI SENIN";
      break;

      case 2:
      	cout<<"HARI KE "<<a<<" ADALAH HARI SELASA";
      break;

      case 3:
      	cout<<"HARI KE "<<a<<" ADALAH HARI RABU";
      break;

      case 4:
      	cout<<"HARI KE "<<a<<" ADALAH HARI KAMIS";
      break;

      case 5:
      	cout<<"HARI KE "<<a<<" ADALAH HARI JUMAT";
      break;

      case 6:
      	cout<<"HARI KE "<<a<<" ADALAH HARI SABTU";
      break;

      case 7:
      	cout<<"HARI KE "<<a<<" ADALAH HARI MINGGU";
      break;

      default:
      	cout<<"HARI YANG ANDA INPUT SALAH, SILAKAN INPUTKAN KEMBALI NOMOR HARI YANG TERSEDIA";
      break;
   }




getch();
}
