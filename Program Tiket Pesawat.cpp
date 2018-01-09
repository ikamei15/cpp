#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main(){

int jml_tiket;
char kd,kelas;
long byr=0;

cout<<"	PROGRAM TIKET PESAWAT        \n";
cout<<"	 JAKARTA - MALAYSIA          \n";
cout<<"--------------------------------------- \n";
      cout<<"1. Merpati";
      cout<<"\n2. Garuda";
      cout<<"\n3. Batavia";

cout<<"\nMasukan Kode Pesawat [1/2/3] : ";cin>>kd;
if(kd=='1'){
   	cout<<"\nKelas Pesawat :";
      cout<<"\n	1. Execuive";
      cout<<"\n	2. Bisnis";
      cout<<"\n	3. Ekonomi";
   	cout<<"\nPilih Kelas [1/2/3] : ";cin>>kelas;

      if(kelas=='1'){
      cout<<"\nNama Pesawat 	: Merpati";
      cout<<"\nKelas	  	: Executive";
      cout<<"\nHarga Tiket	: Rp 1000000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*1000000;
      cout<<"\nBayar		: "<<byr;
      }else if(kelas=='2'){
      cout<<"\nNama Pesawat 	: Merpati";
      cout<<"\nKelas		: Bisnis";
      cout<<"\nHarga Tiket	: Rp 800000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*800000;
      cout<<"\nBayar		: "<<byr;

      }else if(kelas=='3'){
      cout<<"\nNama Pesawat 	: Merpati";
      cout<<"\nKelas		: Ekonomi";
      cout<<"\nHarga Tiket	: Rp 500000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*500000;
      cout<<"\nBayar		: "<<byr;
      }else{
      cout<<"\nSalah Kelas!!";
      }
}else if(kd=='2'){
   	cout<<"\nKelas Pesawat :";
      cout<<"\n	1. Execuive";
      cout<<"\n	2. Bisnis";
      cout<<"\n	3. Ekonomi";
   	cout<<"\nPilih Kelas [1/2/3] : ";cin>>kelas;

      if(kelas=='1'){
      cout<<"\nNama Pesawat 	: Garuda";
      cout<<"\nKelas		: Executive";
      cout<<"\nHarga Tiket	: Rp 1000000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*1000000;
      cout<<"\nBayar		: "<<byr;
      }else if(kelas=='2'){
      cout<<"\nNama Pesawat 	: Garuda";
      cout<<"\nKelas		: Bisnis";
      cout<<"\nHarga Tiket	: Rp 800000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*800000;
      cout<<"\nBayar		: "<<byr;
      }else if(kelas=='3'){
      cout<<"\nNama Pesawat 	: Garuda";
      cout<<"\nKelas		: Ekonomi";
      cout<<"\nHarga Tiket	: Rp 500000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*500000;
      cout<<"\nBayar		: "<<byr;
      }else{
      cout<<"\nSalah Kelas!!";
      }
}else if(kd=='3'){
   	cout<<"\nKelas Pesawat :";
      cout<<"\n	1. Execuive";
      cout<<"\n	2. Bisnis";
      cout<<"\n	3. Ekonomi";
   	cout<<"\nPilih Kelas [1/2/3] : ";cin>>kelas;

      if(kelas=='1'){
      cout<<"\nNama Pesawat 	: Batavia";
      cout<<"\nKelas		: Executive";
      cout<<"\nHarga Tiket	: Rp 1000000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*1000000;
      cout<<"\nBayar		: "<<byr;
      }else if(kelas=='2'){
      cout<<"\nNama Pesawat 	: Batavia";
      cout<<"\nKelas		: Bisnis";
      cout<<"\nHarga Tiket	: Rp 800000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*800000;
      cout<<"\nBayar		: "<<byr;
      }else if(kelas=='3'){
      cout<<"\nNama Pesawat 	: Batavia";
      cout<<"\nKelas		: Ekonomi";
      cout<<"\nHarga Tiket	: Rp 500000";
   	cout<<"\nJumlah Tiket	: ";cin>>jml_tiket;
      byr=jml_tiket*500000;
      cout<<"\nBayar		: "<<byr;
      }else{
      cout<<"\nSalah Kelas!!";
      }
}else{
cout<<"\nSalah Kode!!";
}
getch();
}
