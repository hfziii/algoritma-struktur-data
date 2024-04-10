#include <iostream>
using namespace std;

int main(){
    int i,j,n=4;
    char ans;
    
    cout << "Do you want to draw the pattern or quit?" << endl;
    cout << "Y (or y) - Yes" << endl;
    cout << "Q (or q) - Quit" << endl;
    cout << " " ; cin >> ans;
    if ((ans=='Y') || (ans=='y'))
    {
        for (i = 1; i <= n; i++)
        {    
            cout << "* * * * * * * * * " << endl;
            cout << " * * * * * * * * * " << endl;   
        }    
        cout << "Press any key to continue" << endl; 
    }
    else if  ((ans=='Q') || (ans=='q'))
    {
        cout << "Program will now exit" << endl;
        cout << "Press any key to continue" << endl; 
    }
    else
    {
        cout << "Input not recognized. Program will now exit" << endl;
        cout << "Press any key to continue" << endl; 
    }
    
    return 0;
}