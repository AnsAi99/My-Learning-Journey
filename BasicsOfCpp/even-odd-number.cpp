
#include <iostream>
using namespace std;
struct operation {
	bool num;

};
operation readinfo() {
	operation number;
	cout << "enter the number" << endl;
	cin >> number.num;
	return number;
}
bool kind(operation ki) {
	return(ki.num % 2 == 0);
	
}
void printkind(operation ki) {
	if (kind(ki)) {
		cout << "even";
	}
	else
		cout << "odd";
}
int main()
{
   printkind(kind(readinfo()))
}