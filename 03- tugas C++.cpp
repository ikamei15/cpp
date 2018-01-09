#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
system("COLOR 4A");
char pil1,pil2,pil3,pil4,jawab1,jawab2,jawab3;
 
 cout<<"=======================================================================\n";
 cout<<"                           Selamat Mencoba                             \n";
 cout<<"                           Game Sederhana                              \n";
 cout<<"=======================================================================\n";
 
 
 cout<<"                  Salah/Benar yang penting Jawab:                      \n";
 cout<<"                Jawab Semua Pertanyaan dengan Benar                    \n";
 cout<<"                                                                       \n";
 cout<<"=======================================================================\n";
 cout<<"Mau Langsung ke Pertanyaan Pertama ? (y/n)"; cin>>pil1;
switch(pil1)
 {
 case 'Y':
 case 'y':
    goto pertanyaana1;
    break;
 case 'N':
 case 'n':
    exit(0);
    break;
   default:
   exit(0);
 }

//PERTANYAAN A1 
pertanyaana1:
system("cls");
system("COLOR 1B");
 cout<<"Pertanyaan 1 :\n\n";
 cout<<"Bila kamu ikut lomba lari marathon dan kamu mendahului orang di posisi nomor dua. Kamu sekarang di nomor berapa?\n";
 cout<<"a. 1\n";
 cout<<"b. 2\n";
 cout<<"c. 3\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Jawaban Kamu salah! Payah, Baru pertanyaan pertama (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb1;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Selamat Jawaban Anda Benar, Alasanya Bila kamu mendahului orang di nomor dua sekarang kamulah yang ada di nomer dua sekarang.! (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah! Payah, Baru pertanyaan pertama (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb1;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }
 
 
//PERTANYAAN A2 
pertanyaana2:
system("cls");
system("COLOR 1B");
 cout<<"Pertanyaan 2 :\n\n";
 cout<<"Kenapa orang makan dengan tangan kanan?\n";
 cout<<"a. Karena Lapar\n";
 cout<<"b. Karena Makan\n";
 cout<<"c. Karena Marah\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda Benar, Alasanya Bila kamu mendahului orang di nomor dua sekarang kamulah yang ada di nomer dua sekarang.! (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Jawaban Kamu salah! Serius dong (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah! Serius dong (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }

//PERTANYAAN A3 
pertanyaana3:
system("cls");
system("COLOR 1B");
 cout<<"Pertanyaan 3 :\n\n";
 cout<<"Nama Ayahnya Kakashi di serial Naruto?\n";
 cout<<"a. Sakumo Hatake\n";
 cout<<"b. Sakuto Hatake\n";
 cout<<"c. Sakashi Hatake\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda Benar. Udah gitu aja (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto selesai;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Jawaban Kamu salah! Payah, Baru pertanyaan pertama (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah! Semangat!!! (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }
 
 //PERTANYAAN B1 
pertanyaanb1:
system("cls");
system("COLOR 1B");
 cout<<"Pertanyaan 1 :\n\n";
 cout<<"Naik terus,tidak pernah turun?\n";
 cout<<"a. Usia\n";
 cout<<"b. Lansia\n";
 cout<<"c. Umur\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda Salah,Serius dong (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc1;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Selamat Jawaban Anda Salah,Serius dong (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc1;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Waduh Jawaban Kamu Benar!  (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }

//PERTANYAAN B2 
pertanyaanb2:
system("cls");
system("COLOR 1B");
 cout<<"Pertanyaan 2 :\n\n";
 cout<<"Serba kecukupan,tidak kekurangan?\n";
 cout<<"a. Makmur\n";
 cout<<"b. Jaya\n";
 cout<<"c. Sentosa\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda Benar, (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanb3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Jawaban Kamu salah! Harus Belajar lagi Kidz (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah! Harus Belajar Lagi Kidz(y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }

//PERTANYAAN B3 
pertanyaanb3:
system("cls");
system("COLOR 1B");
 cout<<"Pertanyaan 3 :\n\n";
 cout<<"Tahun berapa RA Kartini Lahir?\n";
 cout<<"a. 1879\n";
 cout<<"b. 1878\n";
 cout<<"c. 1877\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda Benar,Udah Gitu Aja (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto selesai;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Jawaban Kamu salah!  (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah!(y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }
 
 //PERTANYAAN C1 
pertanyaanc1:
system("cls");
system("COLOR 1B");
 cout<<"Pertanyaan 1 :\n\n";
 cout<<"Ketika marah biasanya orang?\n";
 cout<<"a. Minum\n";
 cout<<"b. Makan\n";
 cout<<"c. Lapar\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda salah (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana1;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Jawaban Kamu benar (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah! Payah, Baru pertanyaan pertama (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana1;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }

//PERTANYAAN C2 
pertanyaanc2:
system("cls");
system("COLOR 2B");
 cout<<"Pertanyaan 2 :\n\n";
 cout<<"Kata Tanya untuk menanyakan sebab?\n";
 cout<<"a. Kenapa\n";
 cout<<"b. Mengapa\n";
 cout<<"c. Dimana\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda Benar(y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaanc3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Jawaban Kamu salah! Payah,salah mulu! (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah! Payah, Salah Mulu(y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana2;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }

//PERTANYAAN C3 
pertanyaanc3:
system("cls");
system("COLOR 3C");
 cout<<"Pertanyaan 3 :\n\n";
 cout<<"P=Q, Maka Q = ?\n";
 cout<<"a. Q\n";
 cout<<"b. P\n";
 cout<<"c. R\n\n";
 cin>>jawab1;
switch(jawab1)
 {
  case 'A':
  case 'a':
     cout<<"Selamat Jawaban Anda Benar,(y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto selesai;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'B':
  case 'b':
     cout<<"Jawaban Kamu salah! Payah, (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
  case 'C':
  case 'c':
     cout<<"Jawaban Kamu salah! Payah,  (y/n)\n";
     cin>>pil2;
     {if((pil2=='y')||(pil2=='Y'))
     {goto pertanyaana3;}
     else if((pil2=='n')||(pil2=='N'))
     {exit(0);}}
     break;
     default:
     exit(0);
 }

selesai:
system("cls");
system("COLOR 1E");
 cout<<"Kamu adalah seorang pemenang\n";
 cout<<"Terima kasih sudah bermain";
getch();
}
