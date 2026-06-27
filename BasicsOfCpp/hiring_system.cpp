
#include <iostream>
#include<string>
using namespace std;
struct stinfo {
	int age;
	bool haslicense;
	bool hasrecommendation;
};
stinfo readinfo() {
	stinfo info;
	cout << "do you have recommendation " << endl;
	cin >> info.hasrecommendation;
	cout << "please enter your age "<<endl;
	cin >> info.age;
	cout << "do you have a driver license "<<endl;
	cin >> info.haslicense;
	return info;
}
bool isaccepted(stinfo info) {
	if (info.hasrecommendation) {
		return true;
	}
	else
	return(info.age > 21 && info.haslicense);

};
void printresult(stinfo info) {
	if (isaccepted(info))
		cout << "/n congratulations! you have been hired" << endl;
	else
		cout << "/n unfotunately ,you have rejected "<<endl;
}
int main() {
	printresult(readinfo());
}