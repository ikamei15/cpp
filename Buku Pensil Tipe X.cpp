#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{

int kd_barang;
char nm_barang[10];
long harga=0;
long kembali=0;
long bayar=0;

cout<<"Masukan Kode : ";cin>>kd_barang;

if (kd_barang==1){
strcpy(nm_barang, "Buku");
harga=1000;
}

else if (kd_barang==2){
strcpy(nm_barang, "Pensil");
harga=2000;
}

else if (kd_barang==3){
strcpy(nm_barang, "TipeX");
harga=3000;
}

else {
cout <<"Kode Barang Salah"<<endl;
}

cout<<"Data"<<endl;
cout<<"====================="<<endl;

cout<<"Kode Barang :"<<kd_barang<<endl;
cout<<"Nama Barang :"<<nm_barang<<endl;
cout<<"Harga Barang :"<<harga<<endl;


cout<<"\n Uang Bayar :";cin>>bayar;

kembali=bayar-harga;

cout<<"--------------------"<<endl;
cout<<"\n Kembali :"<<kembali;

getch ();
}










