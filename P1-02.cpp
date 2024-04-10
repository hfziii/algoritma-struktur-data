#include <iostream>
#include <fstream>

using namespace std;

int main(){
    cout << "menulis file" << endl;
    ofstream file_k;
    file_k.open("contoh.txt");
    cout << "merekam" << endl;
    file_k << "halo" << endl;
    file_k << "saya" << endl;
    file_k << "seorang" << endl;
    file_k << "programer" << endl;
    file_k.close();

    cout << "membaca file" << endl;
    string line;
    ifstream file_input;
    file_input.open("contoh.txt");

    cout << "membaca isi file" << endl;
    while (file_input)
    {
        getline(file_input, line);
        cout << line << endl;
    }

}
