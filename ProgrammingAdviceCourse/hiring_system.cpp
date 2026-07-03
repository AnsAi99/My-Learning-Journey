
#include <iostream>
#include<string>
using namespace std;
struct stinfo {
	int age;
	bool haslicens;
	bool hasrecommendation;
};
stinfo readinfo() {
	stinfo info;
	cout << "do you have recommendation " << endl;
	cin >> info.hasrecommendation;
	cout << "please enter your age "<<endl;
	cin >> info.age;
	cout << "do you have a driver licens "<<endl;
	cin >> info.haslicens;
	return info;
}
bool isaccepted(stinfo info) {
	if (info.hasrecommendation) {
		return true;
	}
	else
	return(info.age > 21 && info.haslicens);

};
void printresult(stinfo info) {
	if (isaccepted(info))
		cout << "/n congratulations you have hired" << endl;
	else
		cout << "/n unfotunatly ,you have rejected "<<endl;
}
int main() {
	printresult(readinfo());
}