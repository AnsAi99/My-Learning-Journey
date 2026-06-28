
#include <iostream>
using namespace std;
int GetNum(string message) {
    int num;
    do
    {   cout << message<<endl;
        cin >> num;
    } while (num<1);
     return num;
}
enum PrimeOrNotprime {
    prime = 1, notprime = 2
};
PrimeOrNotprime check(int num) {
    if (num >= 2)
        return PrimeOrNotprime::notprime;
        int halfnum=num/2;
        for (int i = 2; i < halfnum; i++)
        {
            if (num % i == 0) {
                return PrimeOrNotprime::notprime;
            }
            else
                return PrimeOrNotprime::prime;
       
    }
 }
void PrintResult(int num) {
    switch (check(num)) {
    case PrimeOrNotprime::notprime:
        cout << "the number  isn't prime" << endl;
        break;
    case PrimeOrNotprime::prime:
        cout << "the number  is prime " << endl;
        break;
    }

}
int main()
{
    PrintResult(check(GetNum("please enter a positive number")));
}
