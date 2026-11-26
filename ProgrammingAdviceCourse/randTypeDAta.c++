#include <iostream>
#include <cstdlib>
using namespace std;
char random(int min, int max)
{
    int randomNum = rand() % (-min + max + 1) + min;
    char randAsccii = randomNum;
    return randAsccii;
}
int main()
{
    srand((unsigned)time(NULL));
    cout
        << random(97, 122) << endl;
    cout << random(65, 90) << endl;
    cout << random(33, 47) << endl;
    cout << random(48, 57) << endl;
}