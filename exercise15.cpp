#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapInts(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a, b;

    cout << "Enter First Number: "; cin >> a;
    cout << "Enter Second Number: "; cin >> b;
    
	cout << "Before swapping a = " << a << " , b = " << b << endl;
	
	swapInts(&a, &b);

	cout << "After swapping a = " << a << " , b = " << b << endl;
	return 0;
}
