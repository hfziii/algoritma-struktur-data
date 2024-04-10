#include <iostream>

using namespace std;

int main(){
    char nama [5] = {'V','a','u','s'};
    cout << "nama awal = " << nama << endl;
    
    //nama akhir
    char *ubah;
    ubah = nama;
    *(ubah + 3) = 'l';
    cout << "nama kamu menjadi =" << nama << endl;
}