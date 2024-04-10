#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct BUKU
{
    int data [5];
    int top;
};

BUKU tumpukan;

void inisialisasi()
{
    tumpukan.top=-1;
}

int IsEmpty()
{
    if(tumpukan.top==-1)
    {
        return 1;

    }else
    {
        return 0;
    }
}

int IsFull()
{
    if (tumpukan.top==5-1)
    {
        return 1;

    }else
     {
        return 0;
     }

}

void push(int data)
{
    tumpukan.top++;
    tumpukan.data[tumpukan.top]=data;
}

void pop()
{
    tumpukan.top=tumpukan.top-1;
    if(tumpukan.top<0)
    {
        tumpukan.top=-1;
    }
}

int main ()
{
    begin:
    system("cls");
    int pilih, input, i;
    inisialisasi();
    do{
        cout << "1. Masukan Buku ke Box (push)" << endl;
        cout << "2. Ambil Buku dari Box (pop)"   << endl;
        cout << "3. Cek Buku di Box"             << endl;
        cout << "4. Keluarkan semua Buku"        << endl;
        cout << endl;
        cout << "Pilih : "; cin >> pilih;
        switch(pilih)
        {
            case 1:
            {
                if(IsFull()==1)
                {
                    cout << "Tumpukan Buku Penuh !";
                }
                else
                {
                    cout << "Kode Buku yang akan di masukkan (push) : "; cin >> input;
                    push(input);
                }
                cout << endl;
                getch();
                break;
            }
            case 2:
            {
                if(IsEmpty()==1)
                {
                    cout << "Tumpukan Buku Kosong !";
                }
                else
                {
                    cout << "Kode Buku yang akan dikeluarkan (pop) = " << tumpukan.data[tumpukan.top] << endl;
                    pop();
                }
                cout << endl;
                getch();
                break;
            }
            case 3:
            {
                if(IsEmpty()==1)
                {
                    cout << "Tumpukan Buku Kosong !" << endl;
                }
                else
                {
                    cout<< "Buku : " << endl;
                    for(i=0; i<=tumpukan.top; i++)
                    {
                        cout << tumpukan.data[i]<<" ";
                    }
                }
                cout<<endl;
                getch();
                break;
            }
            case 4:
            {
                inisialisasi();
                cout<<"Tumpukan Buku Kosong !"<<endl;
                cout<<endl;
                getch();
                break;
            }
            default:
            {
                cout<<"Silahkan masukan pilihan yang benar" << endl;
                goto begin;
            }
        }
    } while (pilih>=1 && pilih <=4);
    getch();
}