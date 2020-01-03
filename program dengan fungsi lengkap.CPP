#include <constrea.h>
#include <iomanip.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TabMhs
{
int NIM;
char Nama[30];
char KodeMK[6];
int Nilai;
char *Grade;
} TabMhs[10], temp;

int no_urut = 0;

void input();
void transaksi();
void cetak();
void urut();
void cari();

int main()
{
int pilih, counter;

a:
cout << "MENU UTAMA" << endl;
cout << "----------" << endl;
cout << "1. Input Data" << endl;
cout << "2. Transaksi Data" << endl;
cout << "3. Cetak Data" << endl;
cout << "4. Urut Data" << endl;
cout << "5. Cari Data" << endl;
cout << "6. Keluar" << endl;
cout << endl << "Masukkan Pilihan Anda : "; cin >> pilih;

clrscr();
switch(pilih)
{
  case 1 : input(); counter = 0; break;
  case 2 : transaksi(); counter = 0; break;
  case 3 : cetak(); counter = 0; break;
  case 4 : urut(); counter = 0; break;
  case 5 : cari(); counter = 0; break;
  case 6 : return 0;
  default : counter++; cout << "Input salah."; break;
}

getch();
if (counter == 3)
return 0;
clrscr();
goto a;
}

void input()
{
if(no_urut == 10)
{
    cout << "Tempat penyimpanan sudah penuh." << endl << endl;
    goto x;
  }

cout << "MENU INPUT DATA No. " << (no_urut + 1) << endl;
cout << "----------------------" << endl;
cout << "Masukkan NIM"; gotoxy(28,3); cout << ":" << endl;
cout << "Masukkan Nama Mahasiswa"; gotoxy(28,4); cout << ":" << endl;
cout << "Masukkan Kode Mata Kuliah"; gotoxy(28,5); cout << ":" << endl;
cout << "Masukkan Nilai Mahasiswa"; gotoxy(28,6); cout << ":" << endl;
  gotoxy(30,3); cin >> TabMhs[no_urut].NIM;
  gotoxy(30,4); gets(TabMhs[no_urut].Nama);
  gotoxy(30,5); cin >> TabMhs[no_urut].KodeMK;
  gotoxy(30,6); cin >> TabMhs[no_urut].Nilai;
  no_urut += 1;
  x:
  cout << "\nPress Any Key to Go Back...";
}

void transaksi()
{
for (int i = 0; i < 10; i++)
{
  if (TabMhs[i].Nilai != 0)
  {
  if (TabMhs[i].Nilai > 85)
  {
    TabMhs[i].Grade = "A";
  }
  else if (TabMhs[i].Nilai > 80)
  {
    TabMhs[i].Grade = "B+";
  }
  else if (TabMhs[i].Nilai > 75)
  {
    TabMhs[i].Grade = "B";
  }
  else if (TabMhs[i].Nilai > 65)
  {
    TabMhs[i].Grade = "C+";
  }
  else if (TabMhs[i].Nilai > 55)
  {
    TabMhs[i].Grade = "C";
  }
  else if (TabMhs[i].Nilai > 45)
  {
    TabMhs[i].Grade = "D";
  }
  else if (TabMhs[i].Nilai <= 45)
  {
    TabMhs[i].Grade = "E";
  }
  }
}
cout << "Transaksi Data Selesai." << endl << endl << "Press Any Key to Continue..." << endl;
}

void cetak()
{
cout << "TABEL KONVERSI NILAI" << endl;
cout << "--------------------"<< endl << endl;
cout << "----------------------------------------------------------------------------" << endl;
gotoxy(1,5); cout << "| No.";
gotoxy(7,5); cout << "|  NIM";
gotoxy(18,5); cout << "|        Nama Mahasiswa";
gotoxy(50,5); cout << "| Kode MK";
gotoxy(60,5); cout << "| Nilai";
gotoxy(68,5); cout << "| Grade |" << endl;
cout << "----------------------------------------------------------------------------" << endl;
for(int i = 0; i < 10; i++)
{
  if (TabMhs[i].NIM != NULL)
  {
  gotoxy(1,7+i); cout << "|  " << (i+1);
  gotoxy(7,7+i); cout << "| " << TabMhs[i].NIM;
gotoxy(18,7+i); cout << "| " << TabMhs[i].Nama;
gotoxy(50,7+i); cout << "|  " << TabMhs[i].KodeMK;
gotoxy(60,7+i); cout << "|  " << TabMhs[i].Nilai;
gotoxy(68,7+i); cout << "|  " << TabMhs[i].Grade;
  gotoxy(76,7+i); cout << "|" << endl;
  }
}
cout << "----------------------------------------------------------------------------" << endl;
cout << endl << "Press any key to go back...";
}

void cetak(int angka)
{
cout << "Hasil Pencarian Angka" << endl;
cout << "---------------------"<< endl << endl;
cout << "----------------------------------------------------------------------------" << endl;
gotoxy(1,5); cout << "| No.";
gotoxy(7,5); cout << "|  NIM";
gotoxy(18,5); cout << "|        Nama Mahasiswa";
gotoxy(50,5); cout << "| Kode MK";
gotoxy(60,5); cout << "| Nilai";
gotoxy(68,5); cout << "| Grade |" << endl;
cout << "----------------------------------------------------------------------------" << endl;
int a=0;
for(int i = 0; i < 10; i++)
{
  if (TabMhs[i].NIM == angka || TabMhs[i].Nilai == angka)
  {
  gotoxy(1,7+a); cout << "|  " << (a+1);
  gotoxy(7,7+a); cout << "| " << TabMhs[i].NIM;
gotoxy(18,7+a); cout << "| " << TabMhs[i].Nama;
gotoxy(50,7+a); cout << "|  " << TabMhs[i].KodeMK;
gotoxy(60,7+a); cout << "|  " << TabMhs[i].Nilai;
gotoxy(68,7+a); cout << "|  " << TabMhs[i].Grade;
  gotoxy(76,7+a); cout << "|" << endl;
  a++;
  }
}
cout << "----------------------------------------------------------------------------" << endl;
cout << endl << "Press any key to go back...";
}

void cetak(char *huruf)
{
cout << "Hasil Pencarian Huruf" << endl;
cout << "---------------------"<< endl << endl;
cout << "----------------------------------------------------------------------------" << endl;
gotoxy(1,5); cout << "| No.";
gotoxy(7,5); cout << "|  NIM";
gotoxy(18,5); cout << "|        Nama Mahasiswa";
gotoxy(50,5); cout << "| Kode MK";
gotoxy(60,5); cout << "| Nilai";
gotoxy(68,5); cout << "| Grade |" << endl;
cout << "----------------------------------------------------------------------------" << endl;
int a=0;
for(int i = 0; i < 10; i++)
{
  if (strstr(TabMhs[i].Nama, huruf) != NULL || strstr(TabMhs[i].KodeMK, huruf) != NULL)
  {
  gotoxy(1,7+a); cout << "|  " << (a+1);
  gotoxy(7,7+a); cout << "| " << TabMhs[i].NIM;
gotoxy(18,7+a); cout << "| " << TabMhs[i].Nama;
gotoxy(50,7+a); cout << "|  " << TabMhs[i].KodeMK;
gotoxy(60,7+a); cout << "|  " << TabMhs[i].Nilai;
gotoxy(68,7+a); cout << "|  " << TabMhs[i].Grade;
  gotoxy(76,7+a); cout << "|" << endl;
  a++;
  }
}
cout << "----------------------------------------------------------------------------" << endl;
cout << endl << "Press any key to go back...";
}

void urut()
{
for (int i = 0; i < 10; i++)
{
  for (int j = 0; j < 9; j++)
  {
  if (TabMhs[j].Nilai < TabMhs[j+1].Nilai)
  {
    temp = TabMhs[j];
    TabMhs[j] = TabMhs[j+1];
    TabMhs[j+1] = temp;
  }
  }
}
cout << "Data sudah diurutkan berdasarkan Nilai tertinggi hingga Nilai terendah." << endl;
cout << "\nPress any key to go back...";
}

void cari()
{
int n, angka;
char huruf[30];

z:
cout << "Cari data berdasarkan : " << endl;
cout << "1. Angka" << endl;
cout << "2. Huruf" << endl;
cout << "Masukkan pilihan Anda : "; cin >> n;
cout << endl;
cout << "Data yang ingin dicari : ";
switch(n)
{
  case 1 : cin >> angka; clrscr(); cetak(angka); break;
  case 2 : gets(huruf); clrscr(); cetak(huruf); break;
  default : cout << endl << "Pilihan salah, silahkan coba lagi." << endl; getch(); clrscr(); goto z;
}
}
