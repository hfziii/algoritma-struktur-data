#include <iostream>
using namespace std;

int balance = 0;
int withdraw_amount = 0;
int deposit_amount = 0;

int withdraw(){
    return balance = balance - withdraw_amount;
}

int deposit(){
    return balance = balance + deposit_amount;
}

void header()
{
    cout << "+-------------------------------------------------------+" << endl;
    cout << "|                        WELCOME !                      |" << endl;
    cout << "+-------------------------------------------------------+" << endl;
}

void line(){
    cout << "+-------------------------------------------------------+" << endl;
}

void exit(){
    cout << "Thank you for using the system!" << endl;
}

int main(){
    char option, ans;

    header();
    cout << "Enter your balance: Rp "; cin >> balance;
    
    menu:
    line();
    cout << "Select an option: "     << endl;
    cout << "1.Withdraw Amount"      << endl;
    cout << "2.Deposit Amount"       << endl;   
    cout << "3.Check on Balance"     << endl;
    cout << "4.Exit"                 << endl;
    cout << "Your option?: ";    cin >> option; 
    line();
    
    switch (option)
    {
    case '1':
        return1:
        cout << "How much amount you want to withdraw from your account?" << endl;
        cout << "Amount: Rp "; cin >> withdraw_amount;

        if (balance < withdraw_amount)
        {
            cout << "Sorry your balance is low" << endl;
            goto return1;
        }
        else
        {
            withdraw();
            cout << "Your new balance is        : Rp " << balance << endl;
            cout << "Amount being withdrawn is  : Rp " << withdraw_amount << endl;
        }
        break;
    
    case '2':
        cout << "How much amount you want to deposit in your account?" << endl;
        cout << "Amount: Rp "; cin >> deposit_amount;
        deposit();
        cout << "Your new balance is : Rp " << balance << endl;
        cout << "Amount Deposit is   : Rp " << deposit_amount << endl;
        break;
    
    case '3':
        cout << "Your balance is : Rp " << balance << endl;
        break;

    case '4':
        goto exit;
        break;

    default:
        break;
    }

    line();
    cout << "Back to menu? [y or Y / n or N] :" ; cin >> ans;
    if ((ans=='y') || (ans=='Y'))
    {
        goto menu;
    }
    line(); 
    exit: 
    exit();

}