#include<iostream>
using namespace std;

int i, j, k, l, num;


void printPattern(){
    for ( i = num; i >=  1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for ( k = 1; k <= num; k++)
    {
        for ( l = 1; l <= k; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter number: "; cin >> num;
    printPattern();
}

///MASIH EROR!!
