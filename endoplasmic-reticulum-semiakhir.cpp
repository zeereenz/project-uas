#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

double pensil;
double pulpen;
double spidol;
double buku;
double penggaris;
double saldo=100000;
double pilihan;
void garis();
void menu();

int main()
{
    char id[10];
    char pass[10];

    login:
        cout<<"================================\n";
        cout<<"         Z'STATIONARY      \n";
        cout<<"================================";
        cout<<endl<<endl;
        cout<<"Silahkan login ke akun member anda";
        cout<<endl;
        cout<<"ID   : ";
        cin>>id;
        cout<<"Sandi: ";
        cin>>pass;

    beranda:
        if(strcmp(id,"user")==0 && strcmp(pass,"123456")==0)

    {
        cout<<"\nLogin Berhasil!\n\n";
        system("pause");
        system("cls");

    while (saldo>0)
    {
        cout<<"\nSelamat datang di Z'STATIONARY!\n";
        cout<<"Disini anda dapat membayar alat tulis yang anda ingin beli dengan saldo UVU anda.\n\n";
        cout<<"Berikut adalah daftar alat tulis yang tersedia di toko kami.\n\n";
        garis();
        menu();
        garis();
        cout<<endl;
        cout<<"Saat ini anda memiliki\n" <<pensil<< " pensil\n" <<pulpen<< " pulpen\n" <<spidol<< " spidol\n" <<buku<< " buku\n" <<penggaris<< " penggaris\n\n";
        cout<<"Saldo UVU anda yang tersedia saat ini adalah " <<saldo<< ".\n";
        garis();
        cout<<"Silahkan ketik nomor barang yang ingin anda pesan atau ketik angka '6' untuk checkout!\n";
        cin>>pilihan;

        if (pilihan==1)
        {
            pensil++;
            saldo = saldo-2000;
        }
        if (pilihan==2)
        {
            pulpen++;
            saldo = saldo-3000;
        }
        if (pilihan==3)
        {
            spidol++;
            saldo = saldo-4500;
        }
        if (pilihan==4)
        {
            buku++;
            saldo = saldo-4000;
        }
        if (pilihan==5)
        {
            penggaris++;
            saldo = saldo-5000;
        }
        if (pilihan==6)
        {
            cout<<"Anda telah membeli\n" <<pensil<< " pensil\n" <<pulpen<< " pulpen\n" <<spidol<< " spidol\n" <<buku<< " buku\n" <<penggaris<< " penggaris\n\n";
            cout<<"Sisa saldo UVU anda adalah " <<saldo<< ".\n";
            cout<<"Terimakasih telah berbelanja!\n\n";
            cin.get();
            return 0;
        }
        system("cls");
    }

    while (saldo<=0)
    {
        garis();
        cout<<"\n\nMaaf, saldo UVU anda tidak mencukupi untuk melakukan pembelian lebih lanjut. Silahkan top up kembali saldo UVU anda.\n\n";
        cout<<"Barang yang telah anda beli adalah\n" <<pensil<< " pensil\n" <<pulpen<< " pulpen\n" <<spidol<< " spidol\n" <<buku<< " buku\n" <<penggaris<< " penggaris\n\n";
        cout<<"Terimakasih telah berbelanja di Z'STATIONARY!\n\n";
        garis();
        cin.get();
        return 0;
    }

    cin.get();
    return 0;
    }
    else
    {
        cout<<"\nID dan/atau password Anda salah, silakan coba lagi.\n\n";
        system("pause");
        system("cls");
        goto login;
        return 0;
    }
}

void garis()
{
    cout<<"=========================="<<endl;
}

void menu()
{
    cout<<"1  |   Pensil    |  2000\n";
    cout<<"2  |   Pulpen    |  3000\n";
    cout<<"3  |   Spidol    |  4500\n";
    cout<<"4  |   Buku      |  4000\n";
    cout<<"5  |   Penggaris |  5000\n";
}
