
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
float CalculateLoantime(float LoanAmount,float MonthlyPayment) {
	float PaymentTime = LoanAmount / MonthlyPayment;
	return PaymentTime;
}
void PrintPaymentMonths() {
	float LoanAmount = GetNum("please enter loan amount ");
	float MonthlyPayment = GetNum("please enter montly payment ");
	cout << "you need " << CalculateLoantime(LoanAmount, MonthlyPayment) << " months to done your loan" << endl;
}
int main()
{
	PrintPaymentMonths();
}
