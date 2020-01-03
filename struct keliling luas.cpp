#include <iostream.h>
#include <conio.h>

struct tkotak
{
double panjang;
double lebar;
void setukuran(double pj, double lb);
double keliling();
double luas();
};

int main()
{
tkotak kotak;
kotak.setukuran(10,7);
cout<<"Panjang : "<<kotak.panjang<<endl;
cout<<"Lebar : "<<kotak.lebar<<endl;
cout<<"Keliling : "<<kotak.keliling()<<endl;
cout<<"Luas : "<<kotak.luas()<<endl;
getch();
return 0;
}

void tkotak::setukuran(double pj, double lb)
{
panjang = pj;
lebar = lb;
}

double tkotak::keliling()
{
return 2*(panjang+lebar);
}
double tkotak::luas()
{
return panjang * lebar;
}