

#include <iostream>
using namespace std;
struct MonyTypes {
    int pinny, nickels, dimes, quarters ;
    float dollars;
};
MonyTypes GetInfo() {
    MonyTypes info;
    cout << "how many pinnies do you have? " << endl;
    cin >> info.pinny;
    cout << "how many nickels do you have? " << endl;
    cin >> info.nickels;
    cout << "how many dimes do you have? " << endl;
    cin >> info.dimes;
    cout << "how many quarters do you have? " << endl;
    cin >> info.quarters;
    cout << "how many dollars do you have? " << endl;
    cin >> info.dollars;
    return info;
}
MonyTypes CalculatMoney(MonyTypes info) {
    info.pinny = info.pinny + (info.nickels * 5) + (info.dimes * 10) + (info.quarters * 25) + (info.dollars * 100);
    info.dollars = info.pinny / 100.0;
    return info;
}
void PrintMony(MonyTypes info) {
    cout << "you have " << info.pinny << " pinnies " << endl;
    cout << "you have " << info.dollars << " dollar" << endl;
}
int main()
{
  
    PrintMony(CalculatMoney(GetInfo()));
}
