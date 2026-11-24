#include <iostream>
using namespace std;
int readPositiveNum(string message)
{
    int num;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}

void printPatternLetter(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }

        cout << "\n";
    }
}
int main()
{
    printPatternLetter(readPositiveNum("please inter a positive num"));
    return 0;
}
