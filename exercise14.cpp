#include<iostream>
#include <iomanip>
using namespace std;

int j;

void starline(){
    for (j = 0; j < 45; j++)
    {
            cout << "*";
    }
        cout << endl;
}

int main(){
    starline();
    cout << "Data Type" << setw(9) << "Range" << endl;
    starline();
    cout << "char" << setw(20) << "-128 to 127" << endl;
    cout << "short" << setw(25) << "-32,768 to 32,767" << endl;
    cout << "int" << setw(26) << "System Dependant" << endl;
    cout << "long" << setw(34) << "-2147483648 to 2147483647" << endl;
    starline();
}