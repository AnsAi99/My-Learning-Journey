#include<iostream>
using namespace std;
    int main()
{
    int x;
    cout << "enter the number of the month " << endl;
    cin >> x;
    switch(x) {
        case 2:
        cout << 29;
        break;
        case 4:
        cout << 30;
        break;
        case 6:
        cout << 30;
        break;
        case 9:
        cout << 30;
        break;
        case 11:
        cout << 30;
        break;
        default:
            cout << 31;
    }
    return 0;
}
