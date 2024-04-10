#include <iostream>
using namespace std;

int n, i;
float num[100], sum=0.0, average;

void calculateSum(){
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter scores: ";
        cin >> num[i];
        sum += num[i];
    }
}

void calculateAverage(){
    average = sum / n;
}

int main(){
    cout << "Enter the amount of student test score data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! amount should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    calculateSum();
    calculateAverage();
    
    cout << "Average = " << average;

}