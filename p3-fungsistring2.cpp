#include <iostream>
#include <string.h>

using namespace std;

int main(){

    //MEMBANDINGKAN JUMLAH STRING
    char str1[] = "Petani";
    char str2[] = "Petani";
    int hasil;

    hasil = strcmp(str1, str2);
    cout << hasil << endl;

    if (hasil == 0)
    {
        printf("str1 dan str 2 sama\n");
    }
    else
    {
        printf("str1 dan str2 berbeda\n");
    }

    //CAPSLK 
    char kata[] = "fuck you";
    cout << strupr (kata) << endl; //capslk on
    char kata2[] = "IDFC";
    cout << strlwr (kata2) << endl; //capslk off

}