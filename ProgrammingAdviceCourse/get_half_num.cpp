#include <iostream>
#include<string>
using namespace std;
int getnum() {
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    return num;
}
int half( int num) {
    
    return (float) num/2;
}
void printnum(int num) {
    string result = "half of " + to_string(num) + "is" + to_string(half(num));
    cout << result<<endl;
}
int main()
{
    printnum(getnum());
}
