
#include <iostream>
#include<string>
#include<cmath>
using namespace std;

float GetNum(string message) {
	float num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
enum enPrimeNumber {
	primeNumber = 1,
notPrimeNumber = 2
};
enPrimeNumber checkPrimeNum(int num) {
	
	int n = sqrt(num) ;
	
	for (int j = 2; j <= n; j++)
	{
				
	   if (num%j == 0) {
		return enPrimeNumber::notPrimeNumber;
					
				}
			}	
			return enPrimeNumber::primeNumber;
	
}
void printPrimeNum(int num) {
	cout << "\n prime numbers from 1 to " << num<<" are:";
	for (int i = 2; i < num; i++)
	{
		if (checkPrimeNum(i) == enPrimeNumber::primeNumber)
			cout <<endl<< i << endl;
	}
}

int main()
{
	printPrimeNum(GetNum("please enter a postive number :"));
}
