

#include <iostream>
using namespace std;
int readage() {
    int age;
    cout << "please enter your age " << endl;
    cin >> age;
    return age;
}
bool checkvalidation(int num ,int from,int to) {
    return(from <= num && to >=num);
}
int ReadUntilAgeBetween(int from,int to) {
    int age=0;
    do
    {
        age = readage();
    } while (!checkvalidation(age,from,to));
    return age;
}
void print(int age) {
    if (checkvalidation(age, 18, 45))
        cout << "valid age " << endl;
    else
        cout << "invalid age " << endl;
}
int main(){
    print(ReadUntilAgeBetween(18,45));
}
