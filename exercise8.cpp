#include <iostream>
using namespace std;

int main(){
    int a=2, b=1, alimit, blimit, i, e;
    char ans;

    cout << "+-----------------------------------------------------+" << endl;
    cout << "|                  EVEN & ODD NUMBERS                 |" << endl;
    cout << "+-----------------------------------------------------+" << endl;

    do
    {
        cout << endl;
        cout << "How many Even Number limit to display?: "; cin >> alimit;
        cout << "How many Odd Numbers limit to display?: "; cin >> blimit;
        cout << "+-----------------------------------------------------+" << endl;
        
        cout << "Even Numbers:" << endl;
        for (i=a; i <= alimit; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
        cout << endl;

        cout << "Odd Numbers:" << endl;
        for (e=b; e <= blimit; e++) {
            if (e % 2 != 0) {
                cout << e << " ";
            }
        }
        
        cout << endl;
        cout << endl;
        cout << "Do you wish try again ? [y/Y or n/N] :" ; cin >> ans;
    } while ((ans=='y') || (ans=='Y'));

    cout << "Thank you for using the system!";
    return 0;

}