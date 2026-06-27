#include<iostream>
using namespace std;
int main() {
	int f1, f2, temp;
	cout << "enter tow numbers one after another" << endl;
	cin >> f1 >> f2;
	cout << f1 << f2 << endl;
	temp = f1;
	f1 = f2;
	f2 = temp;
	cout << f1 << f2 << endl;
	return 0;
}