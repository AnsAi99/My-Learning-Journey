#include <iostream>
using namespace std;
float readnum (string message ) {
	float num;
	cout << message << endl;
	cin >> num;
	return num;
}
enum  enoptype {
	sum = '+', mult = '*',
	divi = '/', sub = '-'
};
enoptype ReadOpType() {
	char op;
	cout << "please enter the operation (+,-,*,/) " << endl;
	cin >> op;
	return(enoptype)op;
}
float calculate (float num1,float num2,enoptype op) {
	switch (op)
	{
	case enoptype::sum:
		return num1 + num2;
	case enoptype::sub:
		return num1 - num2;
	case enoptype::mult:
			return num1 * num2;
	case enoptype::divi:
		return num1 / num2;
	default:
		return 0;
		break;
	}
}
int main() {
	int num1 = readnum("please enter the first number");
	int num2 = readnum("please enter the second number");
		enoptype op = ReadOpType();

	cout << "the result is " << calculate(num1, num2, op)<<endl;
}