
#include <iostream>
#include<string>
using namespace std;
int GetNum (string message) {
    int num;
    cout << message<<endl;
    cin >> num;
    return num;
}
int Loop(int &num) {
    int  container,sum=0,counter=0;
    do{
        container = GetNum("please enter a number " + to_string(counter));
        if (container == -99)
            break;
        sum += container;
        counter++;
    } while (container!= -99);
    
    return sum;
}
int main()
{
    int num;
   cout << "the sum = " << Loop(num) << endl;
}
