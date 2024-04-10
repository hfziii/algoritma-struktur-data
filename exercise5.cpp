#include <iostream>
using namespace std;

int main(){
    float i, sum, average, u;
    i=1;
    sum=0;
    cout << "+-------------------------------------------------------+" << endl;
    cout << "|                        WELCOME !                      |" << endl;
    cout << "+-------------------------------------------------------+" << endl;
    while (i<=10)
    {
        cout << "Enter Marks: "; cin >> u;
        sum = sum+u;
        i++;
    }
    average=sum/10;
    cout << "Class Average is: " << average;
    return 0;
}