#include <iostream>
using namespace std;

float f,c;
void line(){
    cout << "+-------------------------------------------------------+" << endl;
}
float farenheit (){
    return c=(f-32)/1.8;
}
float celcius (){
    return f=(c*1.8)+32;
}
int main(){
    char menu, ans;
    do
    {
        line();
        cout << "Press 1 to convert Fahrenheit to Celsius " << endl;
        cout << "Press 2 to convert Celsius to Fahrenheit " << endl;
        cout << " "; cin >> menu;
        line();

        switch (menu)
        {
        case '1':
            cout << "Enter temperature in Fahrenheit: " ; cin >> f;
            farenheit ();
            cout << "In Celsius thats: " << c << endl;
            break;
        case '2':
            cout << "Enter temperature in Celsius: " ; cin >> c;
            celcius ();
            cout << "In Fahrenheit thats: " << f << endl;
            break;
        default:
            break;
        }
        line();
        cout << "Do you wanna to convert again? [y or Y / n or N] :" ; cin >> ans;
    } while ((ans=='y') || (ans=='Y'));
}