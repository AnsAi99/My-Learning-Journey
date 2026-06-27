// prime number or not.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, i = 2, c = 0;
    bool it = true;
    cout << "enter the number" << endl;
    cin >> n;
    if (n < 0)
        it = false;
    while (i < n/2) {
        if (n % i == 0) {
            it = false;
            break;
        }
        i++;
    }
    if (it)
        cout << "prime number" << endl;
    else
        cout << "not prime number" << endl;
}

