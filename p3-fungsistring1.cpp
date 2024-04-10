#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char nama1[10];
    cout << strcpy (nama1, "slebew") << endl;

    char nama2[] = "Muhamad Hafizi";
    char gelar[] = ", S.Kom";
    cout << strcat(nama2, gelar) << endl;

    char nama3[] = "Muhamad Hafizi";
    int panjang_nama = strlen(nama3);
    cout << panjang_nama << endl;
}