#include<conio.h>
#include<iostream.h>
#include<conio.h>

main()
{
	struct data
   {
   	char nim[5];
      char nama[15];
      int nilai;
      };

      clrscr();
      data mahasiswa;
      cout<<"Masukan NIM         = ";
      cin>>mahasiswa.nim;
      cout<<"Masukan Nama        = ";
      cin>>mahasiswa.nama;
      cout<<"Masukan Nilai Akhir = ";
      cin>>mahasiswa.nilai;
      cout<<"\n\nData yang diinputkan adalah : \n\n";
      cout<<"NIM         = "<<mahasiswa.nim<<endl;
      cout<<"Nama        = "<<mahasiswa.nama<<endl;
      cout<<"Nilai Akhir = "<<mahasiswa.nilai<<endl;
      getch();
   }
