#include<stdio.h>
#include<iostream.h>
#include<conio.h>

char ket(float n);

main()
{
   int i,data;
   float hhasil[5];
	struct
   {
   	char nim[10];
      char nama[15];
      float uts;
      float uas;
      float nilai;
      }mhs[5];

      clrscr();
      cout<<"           LATIHAN C++      "<<endl;
      cout<<"  Program Perhitungan Nilai Mahasiswa  "<<endl;
      cout<<"======================================="<<endl;
      cout<<"Berapa banyak data yang diinput? = "<<endl;
      cin>>data;
      for(i=1;i<=data;i++) {
      cout<<"Data ke = "<<i<<endl;
      cout<<"Masukan NIM         = ";
      cin>>mhs[i].nim;
      cout<<"Masukan Nama        = ";
      cin>>mhs[i].nama;
      cout<<"Masukan Nilai UTS   = ";
      cin>>mhs[i].uts;
      cout<<"Masukan Nilai UAS   = ";
      cin>>mhs[i].uas;
      }


      cout<<"           LATIHAN C++      "<<endl;
      cout<<"  Program Perhitungan Nilai Mahasiswa  "<<endl;
      cout<<"======================================="<<endl;
      cout<<"\n\nData yang diinputkan adalah : \n\n";
      for(i=1;i<=data;i++) {
      cout<<"NIM         = "<<mhs[i].nim<<endl;
      cout<<"Nama        = "<<mhs[i].nama<<endl;
      cout<<"Nilai UTS   = "<<mhs[i].uts<<endl;
      cout<<"Nilai UAS   = "<<mhs[i].uas<<endl;
      hhasil[i] = (mhs[i].uts+mhs[i].uas)/2;
      cout<<"Nilai Akhir = "<<hhasil[i]<<endl;
      cout<<"NILAI = "<<ket(hhasil[i])<<endl;
      cout<<endl;
      }

      for(i=1;i<=data;i++) {
cout<<"------------------------------------------------\n";
cout<<"No.|  NIM  |  NAMA    | NILAI AKHIR     | KET |\n";
cout<<"================================================\n";
   for(i=1;i<=data;i++) {
    cout<<" "<<i<<" | "<<mhs[i].nim<<" | "<<mhs[i].nama<<"     | "<<hhasil[i]<<"      | "<<ket(hhasil[i])<<endl;
    }
cout<<"------------------------------------------------\n";
      }
      getch();
   }
   char ket(float n)
   {
   if(n>70)
   	return 'L';
   else
   	return 'G';
   }

