
#include <iostream>
#include<iomanip>
using namespace std;
struct StTime {
	float NumOfMinuts, NumOfHours, NumOfDays,NumOfSeconds;
};
int GetNum(string message) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}
StTime calculation(int NumOfSeconds) {
	StTime taskduration;
	const int SecondsInDay = 60 * 60 * 24;
	const int SecondsInHours = 60 * 60;
	const int SecondsInMinuts = 60;


	int reminder = 0;
	taskduration.NumOfDays = floor(NumOfSeconds / SecondsInDay);
	reminder = NumOfSeconds % SecondsInDay;
	taskduration.NumOfHours = floor(reminder / SecondsInHours);
	reminder = reminder % SecondsInHours;
	taskduration.NumOfMinuts = floor(reminder / SecondsInMinuts);
	reminder = reminder% SecondsInMinuts;
	taskduration.NumOfSeconds = reminder;
	return taskduration;
}
void print(StTime info) {
	cout << info.NumOfDays <<":"<< info.NumOfHours <<":" << info.NumOfMinuts <<":" << info.NumOfSeconds << endl;
}
int main()
{
	int NumOfSeconds = GetNum("please enter the number of seconds");
	print(calculation(NumOfSeconds));
	
	return 0;
}
