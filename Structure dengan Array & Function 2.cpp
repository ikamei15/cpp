#include<conio.h>
#include<iostream.h>
#include<conio.h>

char ket(float n);

main()
{
   int i,data;
   float hhasil;
	struct
   {
   	char nim[10];
      char nama[15];
      float uts;
      float uas;
      float nilai;
      }mhs[5];

      clrscr();
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
      cout<<"\n\nData yang diinputkan adalah : \n\n";
      for(i=1;i<=data;i++) {
      cout<<"NIM         = "<<mhs[i].nim<<endl;
      cout<<"Nama        = "<<mhs[i].nama<<endl;
      cout<<"Nilai UTS   = "<<mhs[i].uts<<endl;
      cout<<"Nilai UAS   = "<<mhs[i].uas<<endl;
      hhasil = mhs[i].uts*60/100+mhs[i].uas*40/100;
      cout<<"Nilai hasil = "<<hhasil<<endl;
      cout<<"NILAI = "<<ket(hhasil)<<endl;
      cout<<endl;
      }
      getch();
   }
   char ket(float n)
   {
   if(n>=80)
   	return 'A';
   else if(n>=70)
   	return 'B';
   else if(n>=56)
   	return 'C';
   else if(n>=47)
   	return 'D';
   else if(n<47)
   	return 'E';
   }
