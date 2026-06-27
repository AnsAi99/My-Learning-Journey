// valid age.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i >= 0; i++) {
        int age;
        cout << "how old are you?" << endl;
        cin >> age;
        if (age >= 18 && age <= 45) {
            cout << "valid age";
            break;
        }
        else
            cout << "invalid age" << endl;
    }
    return 0;




}
    
