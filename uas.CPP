#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#define jumkar 100
#define datpeg 3
#define atrtunj 3

void main() {
 clrscr();
   cout <<"Program Hitung Honor Karyawan Kontrak \n";
   cout <<"PT. PETERNAKAN CODE \n";
   cout <<"\n ";
   cout <<"<< tampilan input >> \n";
   cout <<"\n ";

   int gaji=3800000;  //gaji tetap bulanan setiap karyawan kontrak
   int lagi = 0, i=1;
   char y;
   string namakaryawan[jumkar];  //nama karyawan sejumlah jumkar
   int datapegawai[jumkar][datpeg];
   long tunjangan[jumkar][atrtunj];
   long gajitotal[jumkar];
   while (lagi<1)
   {
      cout<<"\nNama Karyawan: "; cin>>namakaryawan[i];
      cout<<"Golongan (1/2/3): "; cin>>datapegawai[i][1];
  cout<<"Pendidikan (1=SMU; 2=D3; 3=S1): "; cin>>datapegawai[i][2];
      cout<<"Jumlah jam kerja: "; cin>>datapegawai[i][3];

      //ketentuan besarnya tunjangan jabatan berdasarkan golongan
      if (datapegawai[i][1]==1)
      {
       tunjangan[i][1]= gaji*0.05;
      }
      else if(datapegawai[i][1]==2)
      {
       tunjangan[i][1]= gaji*0.10;
      }
      else if(datapegawai[i][1]==3)
      {
       tunjangan[i][1]= gaji*0.15;
      }

      //ketentuan besarnya tunjangan pendidikan berdasarkan pendidikan
      if (datapegawai[i][2]==1)
      {
       tunjangan[i][2]= gaji*0.025;
      }
      else if(datapegawai[i][2]==2)
      {
       tunjangan[i][2]= gaji*0.05;
      }
      else if(datapegawai[i][2]==3)
      {
       tunjangan[i][2]= gaji*0.075;
      }

      //ketentuan besarnya gaji honor lembur berdasarkan jam kerja
      if (datapegawai[i][3]>=240)
      {
       tunjangan[i][3]= (datapegawai[i][3]-240)*2500;
      }
      else
      {
       tunjangan[i][3]= 0;
      }

      //menghitung total gaji (gaji bersih) setiap karyawan
      gajitotal[i] = gaji + tunjangan[i][1] + tunjangan[i][2] + tunjangan[i][3];

      cout<<"\nULANGI LAGI [Y/T] ? ";
      y = getche();
    {
     if (y=='Y'||y=='y')
         lagi =- 1;
         i++;
      }
      lagi++;
      cout<<"\n";
   }

   clrscr();
   cout <<"\n << tampilan output >> \n";
   cout <<" PT. PETERNAKAN CODE \n";
   cout <<"----------------------------------------------------------------\n";
   cout <<"No.";
   gotoxy(6,5); cout<<"Nama";
   gotoxy(20,5); cout<<"Tunjangan";
   gotoxy(5,6); cout<<"Karyawan";
   gotoxy(20,6); cout<<"-----------------";
   gotoxy(40,6); cout<<"Honor";
   gotoxy(50,6); cout<<"Gaji";
   gotoxy(20,7); cout<<"Jabatan";
   gotoxy(28,7); cout<<"Pendidikan";
   gotoxy(40,7); cout<<"Lembur";
   gotoxy(50,7); cout<<"Bersih";
   gotoxy(1,8);  cout<<"----------------------------------------------------------------\n ";

   //menghitung total gaji semua karwayan (gajikeluar)
   long gajikeluar = 0;
   for (int j=1;j<i;j++)
   {
    gotoxy(1,8+j); cout<<j; cout<<".";
      gotoxy(5,8+j); cout<<namakaryawan[j];
      gotoxy(20,8+j); cout<<tunjangan[j][1];
      gotoxy(28,8+j); cout<<tunjangan[j][2];
      gotoxy(40,8+j); cout<<tunjangan[j][3];
      gotoxy(50,8+j); cout<<gajitotal[j];
      gajikeluar = gajikeluar + gajitotal[j];
   }
   gotoxy(1,8+i);  cout<<"----------------------------------------------------------------\n ";
   gotoxy(5,9+i);  cout<<"Total gaji yang dikeluarkan";
   gotoxy(45,9+i); cout<<gajikeluar;
   gotoxy(1,10+i); cout<<"----------------------------------------------------------------\n ";

   getch();
}