#include <iostream>
using namespace std;

int a;
int b;

void header()
{
    cout << "+------------------------------------------+" << endl;
    cout << "|                 WELCOME !                |" << endl;
    cout << "+------------------------------------------+" << endl;
}

void comparison(){
    if (a > b)
    {
        cout << "number 1 is greater than number 2" << endl;
    }
    else if (b > a)
    {
        cout << "number 2 is greater than number 1" << endl;
    }
}

void number1(){
    if ( a % 2 == 0 )
    {
        cout << "number 1 is EVEN." << endl;
    }
    else
    {
        cout << "number 1 is ODD." << endl;
    }
}

void number2(){
    if ( b % 2 == 0 )
    {
        cout << "number 2 is EVEN." << endl;
    }
    else
    {
        cout << "number 2 is ODD." << endl;
    }
}

int main(){
    header();
    cout << "Enter number 1: "; cin >> a;
    cout << "Enter number 2: "; cin >> b;
    comparison();
    number1();
    number2();
}