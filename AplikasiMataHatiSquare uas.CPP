#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip>

header(){                                                                                                    //<--------------- FUNCTION --------------
	 cout<<"  ------------------------------------------------------------------------------"<<endl;
    cout<<"                                Matahati Square"<<endl;
	 cout<<"                           Jl Samsung blok A no. 3"<<endl;
	 cout<<"  ------------------------------------------------------------------------------"<<endl;

}
menu(){
	cout<<"  1.Baju, 2.Kemeja, 3.Jaket, 4.Celana, 5.Rok, 6.Sepatu, 7.Tas"<<endl<<endl;
}

main(){
int i,b_brg,jml[5],kd_barang[5],t_harga;
char ke,no,item;
char nm_barang[7][10]={"Baju","Kemeja","Jaket","Celana","Rok","Sepatu","Tas"};     //<------------------ ARRAY -------------------
long h_barang[7]={50000,60000,70000,45000,55000,75000,100000};
long j_harga[5];
long bayar,kembali;


//------------------------------------ Menu Awal ----------------------------------------------------
awal:
clrscr();
cout<<endl;
header();
cout<<endl;
cout<<"  1. Lihat List Barang"<<endl;
cout<<"  2. Pembelian Barang"<<endl;
cout<<endl;
test:
cout<<"  pilih nomor --> ";cin>>no;

//------------------------------------ Akhir Menu Awal ----------------------------------------------------

if(no=='1'){
//------------------------------------ List Barang ----------------------------------------------------
    kmbl1:
	 clrscr();
    header();
	 cout<<"  List Barang"<<endl;
	 cout<<"  ------------------------------------------------"<<endl;
	 cout << setw(5) << " No" << setw(15) << "Nama Barang" << setw(15) << "Harga" << endl;
	 cout<<"  ------------------------------------------------"<<endl;
    for(i=0;i<7;i++){
    cout << setw(5) << i+1 << setw(15) << nm_barang[i] << setw(15) << h_barang[i] << endl;
    }
    cout<<endl;
    cout<<"  Kembali ke menu(Y/N) : ";cin>>ke;

    if(ke=='Y' || ke=='y'){
    	goto awal;
    }else if(ke=='N' || ke=='n'){
    	goto end;
    }else{
    	goto kmbl1;
    }
//------------------------------------ Akhir List Barang ----------------------------------------------------



}else if(no=='2'){
//------------------------------------ Input Data Barang ----------------------------------------------------
    kd:
	 clrscr();
	 cout<<endl;
    menu();
	 header();
	 cout<<endl<<endl;
	 //cout<<"  Banyak Jenis Barang --> ";cin>>b_brg;cout<<endl;
    b_brg=1;
    for(i=0;i<b_brg;i++){
    cout<<"  Kode Barang "<<i+1<<"= ";cin>>kd_barang[i];
    if(kd_barang[i]>=1 && kd_barang[i]<=7){
    	goto lanjut;
    }else{
    	goto kd;
    }
    lanjut:
    cout<<"  Nama Barang = "<<nm_barang[kd_barang[i]-1]<<endl;
    cout<<"  Harga Barang = Rp."<<h_barang[kd_barang[i]-1]<<endl;
    cout<<"  Jumlah barang =";cin>>jml[i];cout<<endl;
    cout<<"  Tambah Item?(Y/N) : ";//cin>>item;cout<<endl;
    item=getche();
    cout<<endl;
    if(item=='Y' || item=='y'){
    	b_brg=b_brg+1;
    }else if(item=='N' || item=='n'){
    	goto byr;
    }else{
    	goto kd;
    }

 	 }
    cout<<endl;


//------------------------------------ Akhir Input Data Barang ----------------------------------------------------


    //------------------------------------ Struk Belanja ----------------------------------------------------
    byr:
    clrscr();
    header();
    cout<<"                                  Daftar Beli"<<endl;
	 cout<<"  ---------------------------------------------------------------------------------"<<endl;
	 cout << setw(5) << " No" << setw(15) << "Nama Barang" << setw(20) << "Harga" << setw(15) << "Jumlah" << setw(15) << "Total" << endl;
	 cout<<"  ---------------------------------------------------------------------------------"<<endl;

	 for(i=0;i<b_brg;i++){//perulangan untuk mendapatkan banyak barang di kali harga                   //<--------------PERULANGAN-------------
    j_harga[i]=jml[i]*h_barang[kd_barang[i]-1];
    }

	 for(i=0;i<b_brg;i++){//perulangan untuk memunculkan data barang                                  //<--------------PERULANGAN-------------
    cout << setw(5) << i+1 << setw(15) <<nm_barang[kd_barang[i]-1]<< setw(15) <<"Rp."<<h_barang[kd_barang[i]-1]<< setw(15)<<jml[i]<< setw(15)<<j_harga[i]<< endl;
	 }

    t_harga=0;//perulangan untuk mendapatkan total keseluruhan barang yang di beli
	 for(i=0;i<b_brg;i++){                                                                          //<--------------PERULANGAN-------------
    t_harga=t_harga+j_harga[i];
    }

	 cout<<"  ---------------------------------------------------------------------------------"<<endl;
	 cout << setw(10) << "   Total Harga" << setw(56) << t_harga<< endl;
	 cout << setw(5) << "   Bayar"<< setw(56)<<"";cin>>bayar;

    if(bayar<t_harga){
    goto byr;
    }else{
    kembali = bayar-t_harga;
    }

	 cout << setw(5) << "   Kembali" << setw(60) << kembali<< endl;
	 cout<<"  ---------------------------------------------------------------------------------"<<endl;
}
//------------------------------------ Akhir Struk Belanja ----------------------------------------------------
else{
goto awal;
}

cout<<"  Transaksi Kembali? (Y/N) : ";cin>>ke;
    if(ke=='Y' || ke=='y'){
    	goto awal;
    }else if(ke=='N' || ke=='n'){
    	goto end;
    }else{
    	goto end;
    }
getch();
end:
}