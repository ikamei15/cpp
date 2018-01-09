#include<conio.h>
#include<iostream.h>
main()
{
int a,b;
int matrix1[2][2];
int matrix2[2][2];
int matrix3[2][2];
clrscr();
cout<<"\t**Tugas Logika Algoritma**\n\n";
for(a=0;a<=1;a++)
{
	for(b=0;b<=1;b++)
   {
   cout<<"Masukkan nilai ke - "<<a<<" "<<b<<" ";cin>>matrix1[a][b];
   }
}
cout<<"\nmatrix1\n";
for(a=0;a<=1;a++)
{
	for(b=0;b<=1;b++)
   {
   cout<<matrix1[a][b];
   }
   cout<<"\n";
}
   cout<<"\n";
for(a=0;a<=1;a++)
{
	for(b=0;b<=1;b++)
   {
   	cout<<"Masukkan nilai ke - "<<a<<" "<<b<<" ";cin>>matrix2[a][b];
   }
}
cout<<"\nmatrix2\n";
for(a=0;a<=1;a++)
{
	for(b=0;b<=1;b++)
   {
   cout<<matrix2[a][b];
   }
   cout<<"\n";
}

for(a=0;a<=1;a++)
{
	for(b=0;b<=1;b++)
   {
   matrix3[a][b]=matrix1[a][b]+matrix2[a][b];
   }
} cout<<"\hasil (penjumlahan)\n";
for(a=0;a<=1;a++)
{
	for(b=0;b<=1;b++)
   {
   	cout<<matrix3[a][b];
   }
   cout<<"\n";
}
getch();
}
