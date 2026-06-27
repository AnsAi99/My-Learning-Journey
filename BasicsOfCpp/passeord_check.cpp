#include<iostream>
#include<string>
using namespace std;

int main() {
	string pass;
	int i = 6;
	do {
		cout << "enter password" << endl;
		cin >> pass;
		
		; if (i == 10) {

			cout << "you have reached the limit of attempts" << endl;
			break;
		}i++;
	}
	while (pass != "ans" && i > 4);
		cout << "correct";
		
}