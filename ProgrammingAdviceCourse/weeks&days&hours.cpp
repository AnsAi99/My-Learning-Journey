
#include <iostream>
#include<iomanip>
using namespace std;
float GetNum(string message) {
	float num;
	do{
		cout << message << endl;
		cin >> num;
	} while (num<=0);
	return num;
}
float HoursToDays(float NumOfHours) {
	return NumOfHours / 24;
}
float DaysToWeeks(float NumOfDays) {
	return NumOfDays / 7;
}
float HoursToWeeks(float NumOfHours) {
	return NumOfHours / 24 / 7;
}
int main()
{
	float NumOfHours = GetNum("please enter the number of hours :");
	float NumOfDays = HoursToDays(NumOfHours);
	float NumofWeeks = DaysToWeeks(NumOfDays);
	cout << endl;
	cout << "the total hours :" << fixed << setprecision(1) << NumOfHours << endl;
	cout << "the total days :" << fixed << setprecision(1) << NumOfDays << endl;
	cout << "the total weeks :" << fixed << setprecision(1) << NumofWeeks << endl;
	return 0;
}