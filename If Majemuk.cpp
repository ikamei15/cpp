#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{

int kd_barang;
char nm_barang[20];
long harga,bayar,kembali;

cout<<"Masukan Kode : ";cin>>kd_barang;

clrscr();
if(kd_barang==1){
strcpy(nm_barang,"Buku");
harga=1000;

cout<<"Data"<<endl;
cout<<"= = = = = = = = = = = = "<<endl;

cout<<"Kode Barang :"<<kd_barang<<endl;
cout<<"Nama Barang :"<<nm_barang<<endl;
cout<<"Harga Barang :"<<harga<<endl;


cout<<"\nUang Bayar 	:";cin>>bayar;
	if(bayar>harga){
	kembali=bayar-harga;


	cout<<"---------------------- \n";
	cout<<"\nKembali :"<<kembali;
	}else if(bayar<harga){
   cout<<"Maaf Uang Anda Tidak Cukup!";
	}
}
else if(kd_barang==2){
strcpy(nm_barang,"Pensil");
harga=2000;

cout<<"Data"<<endl;
cout<<"= = = = = = = = = = = = "<<endl;

cout<<"Kode Barang :"<<kd_barang<<endl;
cout<<"Nama Barang :"<<nm_barang<<endl;
cout<<"Harga Barang :"<<harga<<endl;


cout<<"\nUang Bayar 	:";cin>>bayar;

if(bayar>harga){
	kembali=bayar-harga;


	cout<<"---------------------- \n";
	cout<<"\nKembali :"<<kembali;
	}else if(bayar<harga){
   cout<<"Maaf Uang Anda Tidak Cukup!";
	}
}
else if(kd_barang==3){
strcpy(nm_barang,"Tipe X");
harga=3000;

cout<<"Data"<<endl;
cout<<"= = = = = = = = = = = = "<<endl;

cout<<"Kode Barang :"<<kd_barang<<endl;
cout<<"Nama Barang :"<<nm_barang<<endl;
cout<<"Harga Barang :"<<harga<<endl;


cout<<"\nUang Bayar 	:";cin>>bayar;

if(bayar>harga){
	kembali=bayar-harga;


	cout<<"---------------------- \n";
	cout<<"\nKembali :"<<kembali;
	}else if(bayar<harga){
   cout<<"Maaf Uang Anda Tidak Cukup!";
	}
}
else{
cout<<"Kode Barang Salah"<<endl;
}

getch();
}