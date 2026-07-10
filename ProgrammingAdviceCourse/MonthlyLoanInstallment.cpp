
#include <iostream>
using namespace std;
int GetNum(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
float CalculateMonthlyPayment(float loanterm,float loanamount) {
	return (float)loanamount / loanterm;
}
void PrintMonthlyPayment() {
	float loanterm = GetNum("please enter please enter loan term by months");
	float loanamount = GetNum("please enter loan amount");
	cout << "you must pay " << CalculateMonthlyPayment(loanterm,loanamount) << " per month" << endl;
}
int main()
{
	PrintMonthlyPayment();
}
