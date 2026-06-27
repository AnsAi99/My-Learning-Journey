

#include <iostream>
using namespace std;
int main()
{
    int x=8;
    int *s = &x;
    cout << s <<endl<< x<<endl;
    *s = 14;
    cout << s << endl << x;
}


