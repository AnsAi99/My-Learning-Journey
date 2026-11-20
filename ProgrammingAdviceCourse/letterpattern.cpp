#include <iostream>
using namespace std;
int GetNum(string message)
{
    int num;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}

void loopWithAscciiValues(int num)
{
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << char(i + 64);
        cout << '\n';
    }
}

int main()
{
    loopWithAscciiValues(GetNum("PLEASE ENTER A PSITIVE NUMBER"));
    return 0;
}