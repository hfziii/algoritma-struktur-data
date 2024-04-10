#include <iostream>
using namespace std;

float amount1, amount2, tot_amouunt, rupee;
char ans;

void a(){
    tot_amouunt=amount1+amount2;
}

void convert(){
    rupee = tot_amouunt*120.33;
}

int main(){
    cout << "+-------------------------------------------------------+" << endl;
    cout << "|                        WELCOME !                      |" << endl;
    cout << "+-------------------------------------------------------+" << endl;
    do
    {
    cout << "Enter first amount: "; 
    std::cout << "" << std::endl;
    cin >> amount1;
    cout << "Enter second amount: £"; cin >> amount2;
    a();
    cout << "Total amount: £" << tot_amouunt << endl;
    convert();
    cout << "Amount in rupees: Rs." << rupee << "/-" << endl;
    cout << "Do you wish to continue ? [y or Y / n or N] :" ; cin >> ans;
    } while ((ans=='y') || (ans=='Y'));

    cout << "Thank you for using the system!";  
}