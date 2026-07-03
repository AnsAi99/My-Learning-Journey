
#include <iostream>
using namespace std;
float GetNum(string message) {
    float num;
    do
    {   cout << message<<endl;
        cin >> num;
    } while (num<1);
     return num;
}
float calculation() {
    float pill = GetNum("how much is the pill");
    float payed = GetNum("how much did you paid");
    float payback =  payed - pill;
    return payback;
}
int main()
{
    cout << "you should give him " << calculation() << " back" << endl;
}
