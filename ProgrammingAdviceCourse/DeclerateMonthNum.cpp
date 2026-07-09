
#include <iostream>
using namespace std;
int GetNumInRange(string message, int from, int to) {
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < from || num>to);
	return num;
}
enum enMonthNum
{
jan = 1, feb = 2, march = 3, april = 4, may = 5, jun = 6, july = 7, aug = 8, sept = 9, october = 10, nov = 11, december = 12
};
enMonthNum GetMonthNum() {
	return (enMonthNum)GetNumInRange("please enter the number of month", 1, 12);
}
string DeclerateNumOfMonth(enMonthNum month) {
	switch (month)
	{
	case jan:
		return "january" ;

	case feb:
	    return "february" ;
	
	case march:
		return "march" ;
		
	case april:
		return "april" ;
	
	case may:
		return "may" ;
		
	case jun:
		return "june" ;
		
	case july:
		 return "july";

	case aug:
		return "augest" ;
		
	case sept:
		return "september" ;
	
	case october:
		return "october";
	
	case nov:
		return "november" ;
	
	case december:
		return "december";
		break;
	default:
		break;
	}
}
int main()
{
	cout << DeclerateNumOfMonth(GetMonthNum()) << endl;
}
