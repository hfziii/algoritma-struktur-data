#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int num,result,i;
    //unsigned num,result,i;
    //signed int num,result,i;
    
    cout << "Enter the value of n: ";
    cin >> num;

    cout << "integer " << setw(20) << "factorial" << endl;
    
    result = 1;
    for(i=1;i<=num;i++) {
        result = result * i;
        cout << i << setw(3) << setw(22) << result << endl;
    }
    
    return 0;
 
}