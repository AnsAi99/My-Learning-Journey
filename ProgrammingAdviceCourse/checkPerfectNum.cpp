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

bool checkPerfectNum(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if ( num%i == 0)
			sum += i;
	}
	return sum == num;
}
void printPerfectNum(int num) {
	if (checkPerfectNum(num))
		cout << num << " is a perfect number" << endl;
	else
		cout << num << " is not perfect number" << endl;
}
int main()
{
	printPerfectNum(GetNum("please enter the number "));
}
