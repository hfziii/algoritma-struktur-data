#include <iostream>
using namespace std;

int a, b, c;
char selection, ans;

void header(){
    cout << "Please enter two numbers " << endl;
}

void line(){
    cout << "+-------------------------------------------------------+" << endl;
}

int Addition(){
    c = a + b;
    cout << "Addition = " << c << endl;
}

int Subtraction(){
    c = a - b;
    cout << "Subtraction = " << c << endl;
}

int Multiplication(){
    c = a * b;
    cout << "Multiplication = " << c << endl;
}

float Division(){
    c = a / b;
    cout << "Division = " << c << endl;
}

int Comparison(){
    if (a > b)
    {
        cout << a <<  " is greater" << endl;
    }
    else if (b > a)
    {
        cout << b << " is greater"  << endl;
    }
}

int main(){
    do
    {
    line();
    header();
    cout << " "; cin >> a;
    cout << " "; cin >> b;
    select:
    line();
    cout << "Please make a selection:"  << endl;
    cout << "1) Addition"               << endl;
    cout << "2) Subtraction"            << endl;
    cout << "3) Multiplication"         << endl;
    cout << "4) Division "              << endl;
    cout << " "; cin >> selection;
    line();
    switch (selection){
    case '1':
        Addition();
        break;
    case '2':
        Subtraction();
        break;
    case '3':
        Multiplication();
        break;
    case '4':
        Division();
        break;
    default:
        cout << "Wrong selection! please try again." << endl;
        goto select;
        break;
    }
    Comparison(); 

    line();
    cout << "Do You Wanna Try Again ? [Y/N] :" ; cin >> ans;
    } while ((ans=='y') || (ans=='Y'));   
}