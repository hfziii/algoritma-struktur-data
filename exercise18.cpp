#include <iostream>
using namespace std;

int i=1;
char call;

void CallFunction(){
    cout << "The function has been called " << i << " times\n\n";
}

int main(){
    do
    {
        cout << "Call the function ?: [Y/N] :" ; cin >> call;
        if ((call=='y') || (call=='Y'))
        {
            CallFunction();
            i = i +1;  
        }
        else
        {
            goto exit;
        }
    } while (i <= 10);    

    exit:
    cout << "Exit The Program, Thank You....\n\n";
}
