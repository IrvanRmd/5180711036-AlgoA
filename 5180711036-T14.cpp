#include <iostream>
#include <conio.h>

using namespace std;

struct data{
    string kode;
    string nama;
};

main(){
    data member[5];
    member[0]={"A001","Bayu"};
    member[1]={"A002","Irvan"};
    member[2]={"A003","Susiati"};
    member[3]={"A007","Diana"};
    member[4]={"A008","Roni"};

    char memb;
    int disc;
    cout<<"Apakah Member(Y/T)   : ";cin>>memb;
    cout<<"=============================================";
        if(memb=='Y'){
           cout<<"\n\tA001";
           cout<<"\n\tA002";
           cout<<"\n\tA003";
           cout<<"\n\tA007";
           cout<<"\n\tA008";
           cout<<"\n======================";

            string cari;
            cout<<"\nInput Nomor      : ";cin>>cari;

            for (int i=0;i<=5;i++){
                if(cari==member[i].kode){
                    cout<<"Nama Member \t : "<<member[i].nama;
                    disc=5/100;
                }
            }
        }

    cout<<"\nMenu Belanja : 1. Air mineral\n";
    cout<<"               2. Air RO \n";
    cout<<"               3. Aqua   \n";

    int b,blnj[20],harga,jml[20];
    int jmlt=0,hargat,hargatt=0;
    cout<<"Berapa Jenis : ";cin>>b;
    for (int a=1;a<=b;a++){


        cout<<"Input Belanja    : ";cin>>blnj[a];

            if(blnj[a]==1){
                harga=5000;
                cout<<"Input Jumlah : ";cin>>jml[a];
                jmlt=jmlt+jml[a];
                hargat=harga*jml[a];

            }
            else if(blnj[a]==2){
                harga=8000;
                cout<<"Input Jumlah : ";cin>>jml[a];
            jmlt=jmlt+jml[a];
            hargat=harga*jml[a];
            }
            else if (blnj[a]==3){
                harga=12000;
                cout<<"Input Jumlah : ";cin>>jml[a];
            jmlt=jmlt+jml[a];
            hargat=harga*jml[a];
            }
                hargatt=hargatt+hargat;
            }

        cout<<"Harga Total Belanja : Rp. "<<hargatt;


    }


