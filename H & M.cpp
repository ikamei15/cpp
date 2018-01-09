#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kode,ukuran,merk[15];
long harga=0;

clrscr();
cout<<"Kode Baju 	: ";cin>>kode;
cout<<"Ukuran     	: ";cin>>ukuran;

if(kode=='1')
{
	strcpy(merk, "H & M");
	if(ukuran=='S' || ukuran=='s'){
   harga=75000;
   }else{
   harga=150000;
   }
}
else if(kode=='2'){
    strcpy(merk, "Pull & Bear");
	if(ukuran=='S' || ukuran=='s'){
   	harga=75000;
   }else{
   	harga=150000;
   }
}
else{
cout<<"Salah Kode baju"<<endl;
}
cout<<"________________________"<<endl;
cout<<"Merk Baju 	: "<<merk<<endl;
cout<<"Harga Baju 	: "<<harga<<endl;

getch();
}
