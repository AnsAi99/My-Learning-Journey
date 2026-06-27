

#include <iostream>
using namespace std;
int GetPValue(string messege) {
    int Num;
    do {
        cout << messege;
        cin >> Num;
    } while (Num < 0);
   
    return Num;
}
int Factorial(int Num) {
    if (Num == 1)
        return 1;
    else
        return Num * Factorial(Num - 1);
}
    void print(int Num) {
        cout << "the factorial is: " << Num;
    }


int main()
{
    print(Factorial(GetPValue("enter the number\n")));
}
