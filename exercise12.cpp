#include <iostream>
using namespace std;

int a, b, c;
char ans;

void Multiplication(){
    unsigned long c = (unsigned long)a * b;
    cout << "Multiplication = " << c << endl;
}

int main(){
	cout << "+-----------------------------------------------+" << endl;
    cout << "|            CALCULATOR SUPERCOMPUTER           |" << endl;
    cout << "+-----------------------------------------------+" << endl;

	do
    {
    cout << "Please enter two numbers " << endl;
    cout << " "; cin >> a;
    cout << " "; cin >> b;
	Multiplication();
    cout << "Do You Wanna Try Again ? [Y/N] :" ; cin >> ans;
    } while ((ans=='y') || (ans=='Y'));
}