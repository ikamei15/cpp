#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{
int n1,n2,n3,h1,h2,h3;
cout <<" Masukan Nilai 1:";cin>>n1;
cout <<"\n Masukan Nilai 2:";cin>>n2;
cout <<"\n Masukan Nilai 3:";cin>>n3;
h1=n1+n2*n3;
h2=n1+(n2*n3);
h3=(n1+n2)*n3;
cout <<"======================= \n";
cout <<"     Hasil Akhir       \n";
cout <<"======================= \n";
cout <<" \n  Hasil Akhir   :"<<h1;
cout <<" \n  Hasil Akhir   :"<<h2;
cout <<" \n  Hasil Akhir   :"<<h3;
getch();
}
