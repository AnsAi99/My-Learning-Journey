

#include <iostream>
using namespace std;
int GetPValue(string messege) {
    int N;
    do {
        cout << messege;
        cin >> N;
    } while (N < 0);
   
    return N;
}
int Factorial(int N) {
    if (N == 1)
        return 1;
    else
        return N * Factorial(N - 1);
}
    void print(int N) {
        cout << "the factorial is: " << N;
    }


int main()
{
    print(Factorial(GetPValue("enter the number/n")));
}
