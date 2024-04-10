#include <iostream>
using namespace std;

int P, B, D, n, GR, EP;

void GrowthRate(){
    GR = B-D;
}

void EstimatedPopulation(){
    EP = ((P*n) + (B*(P*n))/100) - ((D*(P*n))/100);
}

int main(){
    begin:
    cout << "Enter Starting Population  = "; cin >> P;
    cout << "Enter Amount of Birth Rate = "; cin >> B;
    cout << "Enter Amount of Death Rate = "; cin >> D;
    cout << "Enter Amount of Years      = "; cin >> n;
    
    if ( P < 2 || B < 0 || D < 0)
    {
        cout << "Invalid population, birth and dates rates! Please try again.\n";
        goto begin; 
    }
    else
    {
        GrowthRate();
        EstimatedPopulation();
    }
    
    cout << "Estimated Population after " << n << " year = " << EP << "\n";
    cout << "And The Growth Rate/year           = " << GR;
}
