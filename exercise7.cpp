#include <iostream>
using namespace std;

int main(){
    int code;
    cout << "+-----------------------------------------------------+" << endl;
    cout << "|                     AIRCRAFT SYSTEM                 |" << endl;
    cout << "+-----------------------------------------------------+" << endl;
    begin:
    cout << "Input Code: "; cin >> code;

    if (code == 100)
    {
        cout << "NORMAL SPEED RANGE" << endl;
        
    }
    else if (code == 101)
    {
        cout << "OVER-SPEED WARNING!" << endl;
    }
    else if (code == 88)
    {
        cout << "LOW OIL PRESSURE" << endl;
    }
    else if (code == 187)
    {
        cout << "ENGINE FAILURE!" << endl;
    }
    else
    {
        cout << "The Code You Entered is Wrong, Please Try Again!" << endl;
        goto begin;
    }
    cout << "Thank you for using the system!";    
}