#include<iostream>
using namespace std;

int a[10], num, i;

void decToBin(){
    for (i = 0; num > 0; i++)
    {
        a[i] = num%2;
        num = num/2;
    }

    cout << " Binary Number: ";
    for ( i = i-1; i >= 0; i--)
    {
        cout << a[i];
    }    
}

int main(){
    cout << "+-----------------------------------------------+" << endl;
    cout << "|  Converting a Number from Decimal to Binary   |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    cout << " Enter Decimal Number: "; cin >> num;
    cout << "+-----------------------------------------------+" << endl;
    decToBin();
}