#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <iomanip>

main(){
int kd_barang,jml;
char nm_barang[10],ke,no;
long harga,bayar,ukmbl,hargapb;

awal:
clrscr();
cout<<endl;
cout<<"  Mata Hati Square"<<endl;
cout<<"  --------------------------";
cout<<endl;
cout<<"  1. Lihat List Barang"<<endl;
cout<<"  2. Masukan Kode Barang"<<endl;
cout<<endl;
cout<<"  pilih nomor --> ";cin>>no;


if(no=='1'){
    kmbl1:
	 cout<<"  List Barang"<<endl;
	 cout<<"  ------------------------------------------------"<<endl;
	 cout << setw(5) << " No" << setw(15) << "Nama Barang" << setw(15) << "Harga" << endl;
	 cout<<"  ------------------------------------------------"<<endl;
    cout << setw(5) << 1 << setw(15) << "Baju" << setw(15) << "50000" << endl;
    cout << setw(5) << 2 << setw(15) << "Kemeja" << setw(15) << "60000" << endl;
    cout << setw(5) << 3 << setw(15) << "jaket" << setw(15) << "70000" << endl;
    cout<<endl;
    cout<<"  Kembali ke menu(Y/N) : ";cin>>ke;

    if(ke=='Y' || ke=='y'){
    	goto awal;
    }else if(ke=='N' || ke=='n'){
    	goto end;
    }else{
    	goto kmbl1;
    }



}else if(no=='2'){
    kd:
	 clrscr();
	 cout<<endl;
	 cout<<"  Mata Hati Square"<<endl;
	 cout<<"  --------------------------";
	 cout<<endl<<endl;
    cout<<"  Masukan Kode Barang --> ";cin>>kd_barang;



	 clrscr();
    if(kd_barang==1){
	 cout<<endl;
	 cout<<"  Mata Hati Square"<<endl;
	 cout<<"  --------------------------";
	 cout<<endl<<endl;
    cout<<"  Nama Barang : Baju"<<endl;
    cout<<"  Harga Barang : 50000"<<endl;
    cout<<"  Jumlah --> ";cin>>jml;cout<<endl;
    }


    else if(kd_barang==2){
	 cout<<endl;
	 cout<<"  Mata Hati Square"<<endl;
	 cout<<"  --------------------------";
	 cout<<endl<<endl;
    cout<<"  Nama Barang : Kemeja"<<endl;
    cout<<"  Harga Barang : 60000"<<endl;
    cout<<"  Jumlah -->";cin>>jml;cout<<endl;
    }


    else if(kd_barang==3){
	 cout<<endl;
	 cout<<"  Mata Hati Square"<<endl;
	 cout<<"  --------------------------";
	 cout<<endl<<endl;
    cout<<"  Nama Barang : Jaket"<<endl;
    cout<<"  Harga Barang : 70000"<<endl;
    cout<<"  Jumlah -->";cin>>jml;cout<<endl;
    }else{
    	goto kd;
    }


bayar:
if(kd_barang==1){
clrscr();
cout<<"  ----------------------------------------"<<endl;
cout<<"               Mata Hati Square              "<<endl;
cout<<"         Jl. ada jarak antara kita         "<<endl;
cout<<"            telp : 081213123123         "<<endl;
cout<<"  ----------------------------------------"<<endl<<endl;
cout<<"      Nama Barang "<<setw(15)<<": Baju"<<endl<<endl;
cout<<"      Jumlah Barang"<<setw(10)<<": "<<jml<<endl<<endl;
cout<<"      Harga Barang "<<setw(15)<<": 50000"<<endl<<endl;
harga=jml*50000;
cout<<"      Total Bayar "<<setw(11)<<": "<<harga<<endl<<endl;
cout<<"      Bayar "<<setw(17)<<": ";cin>>bayar;cout<<endl;
if(bayar<harga){
	goto bayar;
}else{cout<<"  ----------------------------------------"<<endl<<endl;
ukmbl = bayar-harga;
cout<<"      Kembali"<<setw(15)<<": "<<ukmbl<<endl<<endl;
cout<<"  ----------------------------------------"<<endl;
}
}

else if(kd_barang==2){
clrscr();
cout<<"  ----------------------------------------"<<endl;
cout<<"               Mata Hati Square              "<<endl;
cout<<"         Jl. ada jarak antara kita         "<<endl;
cout<<"            telp : 081213123123         "<<endl;
cout<<"  ----------------------------------------"<<endl<<endl;
cout<<"      Nama Barang "<<setw(15)<<": Kemeja"<<endl<<endl;
cout<<"      Jumlah Barang"<<setw(10)<<": "<<jml<<endl<<endl;
cout<<"      Harga Barang "<<setw(15)<<": 60000"<<endl<<endl;
harga=jml*60000;
cout<<"      Total Bayar "<<setw(11)<<": "<<harga<<endl<<endl;
cout<<"      Bayar "<<setw(17)<<": ";cin>>bayar;cout<<endl;
if(bayar<harga){
	goto bayar;
}else{cout<<"  ----------------------------------------"<<endl<<endl;
ukmbl = bayar-harga;
cout<<"      Kembali"<<setw(15)<<": "<<ukmbl<<endl<<endl;
cout<<"  ----------------------------------------"<<endl;
}
}


else if(kd_barang==3){
clrscr();
cout<<"  ----------------------------------------"<<endl;
cout<<"               Mata Hati Square              "<<endl;
cout<<"         Jl. ada jarak antara kita         "<<endl;
cout<<"            telp : 081213123123         "<<endl;
cout<<"  ----------------------------------------"<<endl<<endl;
cout<<"      Nama Barang "<<setw(15)<<": Jaket"<<endl<<endl;
cout<<"      Jumlah Barang"<<setw(10)<<": "<<jml<<endl<<endl;
cout<<"      Harga Barang "<<setw(15)<<": 70000"<<endl<<endl;
harga=jml*70000;
cout<<"      Total Bayar "<<setw(11)<<": "<<harga<<endl<<endl;
cout<<"      Bayar "<<setw(17)<<": ";cin>>bayar;cout<<endl;
if(bayar<harga){
	goto bayar;
}else{cout<<"  ----------------------------------------"<<endl<<endl;
ukmbl = bayar-harga;
cout<<"      Kembali"<<setw(15)<<": "<<ukmbl<<endl<<endl;
cout<<"  ----------------------------------------"<<endl;
}
}
kmbl2:
cout<<"  Transaksi kembali? (Y/N) : ";cin>>ke;

    if(ke=='Y' || ke=='y'){
    	goto awal;
    }else if(ke=='N' || ke=='n'){
    	goto end;
    }else{
    	goto kmbl2;
    }



}else{
	goto awal;
}
getch();
end:
}