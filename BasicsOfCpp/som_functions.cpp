

#include <iostream>
using namespace std;
 
enum passfail
{
    pass = 1, fail = 2
};

//ÏÇáÉ ÇáÇÏÎÇá
void getnum(int &mark1,int &mark2,int &mark3) {      
    cout << "please enter the first number"<<endl;
    cin >>mark1;
    cout << "enter the second number" << endl;
    cin >> mark2;
    cout << "enter the third number" << endl;
    cin >>mark3;
 
}
//ÏÇáÉ ÇáÚãáíÇÊ
int operation(int num1,int num2,int num3) {
    int sum;
    sum = num1 + num2 + num3;
    return sum;
}
//ÏÇáÉ áÍÓÇÈ ÇáãÊæÓØ
float calculateaverage(int num1, int num2, int num3) {
    return (float) operation( num1,  num2,  num3) / 3;
}
//ÏÇáÉ ááäÌÇÍ Çæ ÇáÑÓæÈ
passfail check(float average) {
    if (average >= 50)
        return passfail::pass;
    else
        return passfail::fail;
}
//ÏÇáÉ ÇáØÈÇÚÉ
void print(float average) {
    cout << "your Average  is " << average ;
    if (check(average) == passfail::pass)
        cout << "\n congratulations you passed";
    else
    {
        cout << "\n unfortunatly you faild ";
    }
}
void getnumb(int& num1, int &num2) {
	
	cout << " please enter the first number " << endl;
	cin >> num1;
	cout << "please enter the second number" << endl;
	cin >> num2;
    
}

int Swap (int &num1,int &num2) {
    int change;
    change = num1;
    num1 = num2;
    num2 = change;
    return num1, num2;
}
void Print (int num1,int num2) {
    cout << "the first number = " << num1 << endl;
    cout << "the second number = " << num2 << endl;
    cout << endl;
}
int main()
{
    int num1, num2;
    getnumb(num1, num2 );
    Print(num1, num2);
    Swap(num1, num2);
    Print(num1, num2);
}
