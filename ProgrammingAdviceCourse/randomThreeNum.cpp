#include <iostream>
#include <cstdlib>
using namespace std;
int random(int min, int max)
{
    int randomNum = rand() % (-min + max + 1) + min;
    return randomNum;
}
int main()
{
    srand((unsigned)time(NULL));

    cout << random(1, 9) << endl;
    cout << random(1, 9) << endl;
    cout << random(1, 9) << endl;
}