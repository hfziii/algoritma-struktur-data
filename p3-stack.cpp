#include <iostream>
#include <stack>

using namespace std;

int isi=0;
int stack[isi];

void push(){

    if (isi == 4)
    {
        cout << "Stack is full!\n";
    }
    else
    {
        isi ++;
        cout << "Masukan Data : ";
        cin >> stack[isi];
        cout << "\nPada Stack indeks ke-" << isi << endl;
        cout << stack[isi] << "Telah ditambahkan ! \n";
    }
    
}

void pop(){
    
    if (isi == -1)
    {
        cout << "Stack Is Empty !\n";
    }
    else
    {
        cout << "\nPada Stack indeks ke-" << isi << endl;
        cout << stack[isi] << "Telah diambil !\n";
        stack[isi--];
    }
    
}