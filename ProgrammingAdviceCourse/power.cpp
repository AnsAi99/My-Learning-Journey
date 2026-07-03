
#include <iostream>
using namespace std;
 int GetNum() {
	 int num;
	cout << "please enter the number " << endl;
	cin >> num;
	return num;
}
 int GetPow() {
	 int pow;
	 cout << "please enter the power" << endl;
	 cin >> pow;
	 return pow;
 }
int PowerN(int num,int pow) {

	int p=1;
	for (int i = 0; i < pow; i++)
	{
		p *= num;
	}
	return p;

}

void PrintN(int p) {
	cout << p;
}
int main()
{
	int num, pow;

	PrintN(PowerN(GetNum(), GetPow()));

}
 