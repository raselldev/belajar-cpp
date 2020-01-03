#include <constrea.h>


//Deklarasi variabel
struct Jam
{	int hh;
   int mm;
   int ss;
};

Jam jam_skrg, jam_sblm;
int p_mnt;

Jam Jam_sebelum (Jam jam_skrg, int p_mnt); //prototype fungsi

//Proses
void main()
{
	cout << "Masukkan Jam (hh) : ";
	cin >> jam_skrg.hh;
	cout << "Masukkan Menit (mm) : ";
	cin >> jam_skrg.mm;
	cout << "Masukkan Detik (ss) : ";
	cin >> jam_skrg.ss;
   cout << endl;
   cout << "Masukkan P Menit (mm) : ";
   cin >> p_mnt;

	jam_sblm = Jam_sebelum (jam_skrg, p_mnt);

   //output
   clrscr();
	cout << "Waktu setelah dikurangi " << p_mnt << " menit adalah : ";
	cout << jam_sblm.hh << " : " << jam_sblm.mm << " : " << jam_sblm.ss;

	getch();
}

//definisi fungsi
Jam Jam_sebelum (Jam jam_skrg, int p_mnt)
{
	//analisa kasus
   if (jam_skrg.mm >= p_mnt)
   	{
      	jam_sblm.mm = jam_skrg.mm - (p_mnt%60);
         jam_sblm.hh = jam_skrg.hh - (p_mnt/60);
      }
   else
   	{
      	jam_sblm.mm = (jam_skrg.mm + 60) - (p_mnt%60);
         jam_sblm.hh = (jam_skrg.hh - 1)- (p_mnt/60);
      }
	jam_sblm.ss = jam_skrg.ss;

   return(jam_sblm);
}

