#include<iostream>
using namespace std;
int main()
{
	int num1,num2, container = 1;
	cout << "enter the beganing";
	cin >> num1;
	cout << "enter the end";
	cin >> num2;
	for (int i = num1; i<= num2; i++) {	
		container  *= i;      	
}
	cout << container;
	return 0;
}