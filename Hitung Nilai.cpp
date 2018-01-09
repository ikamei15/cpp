#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{
int a,b,c,d,n1,n2,n3,n4,na;
cout <<" Masukan Nilai Absen:";cin>>a;
cout <<"\n Masukan Nilai Tugas:";cin>>b;
cout <<"\n Masukan Nilai UTS:";cin>>c;
cout <<"\n Masukan Nilai UAS:";cin>>d;
n1=a*20/100;
n2=b*25/100;
n3=c*25/100;
n4=d*30/100;
na=n1+n2+n3+n4;
cout <<"======================= \n";
cout <<"     Hasil Akhir       \n";
cout <<"======================= \n";
cout <<" \n  Hasil Nilai Absen   :"<<n1;
cout <<" \n  Hasil Nilai Tugas   :"<<n2;
cout <<" \n  Hasil Nilai UTS     :"<<n3;
cout <<" \n  Hasil Nilai UAS     :"<<n4;
cout <<" \n  Hasil Nilai Akhir   :"<<na;
getch();
}
