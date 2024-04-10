#include <iostream>

using namespace std;

struct Saswi
{
    string nama;
    string sekolah;
    string alamat;
    unsigned int uangSaku; //tidak bil negatif
    double pengeluaran;
} Saswi1;

int main()
{
    Saswi siswa[5];

   for (int i = 0; i < 3; i++)
   {
    cout << " masukan nama : ";
    cin >> siswa[i].nama;
    cout << " masukin sekolah : ";
    cin >> siswa[i].sekolah ;
    cout << " masukin alamat : ";
    cin >> siswa[i].alamat ;
    cout << " masukin pengeluaran : ";
     cin >> siswa[i].pengeluaran ;
     cout << " masukin uangsaku : ";
     cin >> siswa[i].uangSaku ;
   }
   
   for (int i = 0; i <3; i++)
   {
    cout << siswa[i].nama << " bersekolah di " << siswa[i].sekolah << endl;
    cout << "alamat sekolah di" <<siswa[i].alamat <<endl;
    cout << "dengan uang saku " << siswa[i].uangSaku << " per hari" << endl;
    cout << "dengan Pengeluaran " << siswa[i].pengeluaran << endl;
    cout << "======================================" << endl;
   }
   
    return 0;
}