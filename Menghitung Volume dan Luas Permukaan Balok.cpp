#include <iostream.h>
#include <conio.h>
#include <string.h>

int main (){
    int p,l,t;
    //proses input p,l,t

    cout<<"****** - MENGHITUNG VOLUME DAN LUAS PERMUKAAN BALOK - ******\n\n";
    cout<<"\tMasukkan nilai P\t       =     ";cin>>p;

    cout<<"\tMasukkan nilai L\t       =     ";cin>>l;

    cout<<"\tMasukkan nilai T\t       =     ";cin>>t;
    cout<<endl;
    cout<<"************************************************************"<<endl<<endl;

    //proses perhitungan

    float v;
    v=p*l*t;
    float Lp;
    Lp=(2*p*l)+(2*p*t)+(2*l*t);

    //proses output

    cout<<"*********************** - JAWABAN - ************************"<<endl<<endl;
    cout<<"\tVolume balok adalah\t\t  =     "<<v<<endl<<endl;
    cout<<"\tLuas permukaan balok adalah\t  =     "<<Lp<<endl<<endl;
    cout<<"*********************** - SELESAI - ************************";

getch();
}