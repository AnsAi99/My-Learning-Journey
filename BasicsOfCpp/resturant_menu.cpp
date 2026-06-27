#include<iostream>
using namespace std;
	int main() {
	int  x;
	cout << "choose the number of your dish ";
		cin >> x;
	switch(x) {
		case 1:
			cout<< "burger";
			break;
		case 2:
			cout << "pizza";
			break;
		case 3:
			cout << "fries";
			break;
		case 4:
			cout << "proust";
			break;
		default:
			cout << "please enter one of the options";

	}
	return 0;
}