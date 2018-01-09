#include <iostream.h>
#include <conio.h>
#include <stdio.h>

//Menghitung Total Gaji Tingkat Pemula


main()
{
   char nama[20], tunjangan_nikah[2], gol[6];
   int total_gaji, total, nkh;
 long y, n, bi, bii, biii, gpi, gpii, gpiii;
   y   = 50000;      // Yes
   n   = 40000;      // No
   bi  = 150000;     // Bonus Gol. 1
   bii   = 175000;   // Bonus Gol. 2
   biii  = 200000;   // Bonus Gol. 3
   gpi  = 2000000;   // Gaji Pokok Gol. 1
   gpii  = 2750000;  // Gaji Pokok Gol. 2
   gpiii = 3500000;  // Gaji Pokok Gol. 3

repeat:
   cout << "nama   : "; gets (nama);
   cout <<endl;
   cout << "nikah (y/n)  : "; cin >> tunjangan_nikah;
   cout <<endl;
   cout << "gol (i/ii/iii)  : "; cin >> gol;
   cout <<endl;


 if (strcmp(tunjangan_nikah,"y")==0){nkh = y;}
   else if (strcmp(tunjangan_nikah,"n")==0){nkh = n;}
   else {cout <<"\n >>>Kode Yang Anda Masukan Salah<<<!!!"<< endl <<endl;
   goto repeat;}

   if(strcmp(gol,"i")==0){total = bi + gpi;}
   else if(strcmp(gol,"ii")==0){total = bii + gpii;}
   else if(strcmp(gol,"iii")==0){total = biii + gpiii;}
   else{cout <<"\n >>>Kode Yang Anda Masukan Salah<<<!!!"<< endl <<endl;
   goto repeat;}

   total_gaji = nkh + total;
   cout << "total gaji  :Rp"<< total_gaji;


getch();
}
