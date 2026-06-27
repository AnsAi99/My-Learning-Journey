#include <iostream>
using namespace std;
int main() {
	int mark;
	cout << "enter your grade" << endl;
	cin >> mark;
	if (mark >= 50 && mark <= 60)
		cout << "acceptful" << endl;
	else if (mark >= 60 && mark < 80)
		cout << "good" << endl;
	else if (mark >= 80 && mark < 90)
		cout << "very good" << endl;

	else if (mark >= 90 && mark <=100)
		cout << "excellent" << endl;
	else if ( mark < 50)
		cout << "faild" << endl;
	else
		cout << "please enter a real grade" << endl;



	return 0;

}