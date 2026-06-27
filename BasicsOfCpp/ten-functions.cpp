#include <iostream>
#include<string>
using namespace std;
struct st {
	//دالة حفظ المتغيرات
     int num1=0;
	int num2=0;
	int num3=0;
	int hoursnum=0;
	int seconds=0;
	float celsius=0.0f;
	float fehr=0.0f;
	int max=0;
	int ans=0;
	float ra=0.0f;
	double area=0.0f;
	const double pi = 3.14159265359;
	float diam=0.0f;
	float circom=0.0f;
	int su = 0;
	int arr[8] ;
	
};
//التكليف الاول
st getnum() {
	st info;

	cout << " please enter the first number " << endl;
	cin >> info.num1;
	cout << "please enter the second number" << endl;
	cin >> info.num2;
	cout << "please enter the third number" << endl;
	cin >> info.num3;
	return info;
}
int sum(st info) {

	return info.num1 + info.num2 + info.num3;
}
void printsum(st info) {
	cout << "the sum of the three numbrs is:"<<sum(info);
}
//التكليف الثاني
st gethours() {
	st info;
	cout << "please enter the number of hours" << endl;
	cin >> info.hoursnum;
	return info;
}
st secondstran(st info) {
	info.seconds = info.hoursnum * 60;
	return info;
}
void printseconds(st info) {
	st result = secondstran(info);
	cout << "there are "<< result.seconds<<" minutes in "<<info.hoursnum<<" hour"<<endl;
}
//التكليف الثالث
st getcelsius() {
	st info;
	cout << "enter the temperature in celsius " << endl;
	cin >> info.celsius;
	return info;
  }
st temptrans(st info) {
	info.fehr = (info.celsius * 1.8) + 32;
	return info;
}
void printfehr(st info) {
	st result = temptrans(info);
	cout <<result.celsius<<"of celius temperature = "<<result.fehr<<"of fahrenheit"<<endl;
}
//التكليف الرابع

void printmax(st info) {
	cout << getmax( info)<< "  is the biggest "<<endl;
}
//التكليف الخامس
st getinfo() {
	st info;
	cout<<"what do you have(1.(radious)-2.(diameter)-3.(cecumference))" << endl;
cin >> info.ans;
switch (info.ans) {
case 1:cout << "enter the radious " << endl;
			cin >> info.ra;
			break;
case 2:cout << "enter diameter " << endl;
			cin >> info.diam;
			break;
case 3:double c;
			cout << "enter cercumference" << endl;
			cin >> info.circom;
			break;
default:cout << "please enter the number of your choice";
			break;
			
}
return info;
}
st calerea(st info) {
	switch (info.ans) {
		case 1:info.area = info.pi * pow(info.ra, 2);
			break;
		case 2:info.area = info.pi * pow(info.diam / 2, 2);
			break;
		case 3:info.ra = info.circom / (2 * info.pi);
			info.area = info.pi * pow(info.ra, 2);
			break;
	}	
	return info;
}
void printarea( st info){
	if (info.ans > 0 && info.ans < 4)
		cout << "the erea of the circle is " << info.area;
}
//التكليف السادس
st getn() {
	st info;
	cout << "where do you want the loop stop? " << endl;
	cin >> info.num1;
	return info;
}
void loop(st info) {
	for (int i = 0; i < info.num1; i++) {
		if (i % 2 == 0)
			cout<< i<<endl;
	}
}
//التكليف السابع
void sumloop(st info) {
	
	for (int i = 0; i < info.num1; i++) {
		if (i % 2 == 0) {
			info.su += i;
		}		
	}
	cout << info.su << endl;
}
//التكليف الثامن
st getarray() {
	st info;
	for (int i = 0; i < 8; i++)
	{
cout << "enter the "<<i+1<<"number" << endl;
	cin >> info.arr[i];
	}
	return info;
}
int max(st info) {
	int m = info.arr[0];
	for (int i = 0; i < 8; i++)
	{
		if (info.arr[i] > m)
			m = info.arr[i];
	}
	return m;
}
void printmax(int m) {
	cout << "the biggist number is " << m;
}
enum passfail
{
	pass = 1, fail = 2
};
//دالة الادخال
void getnum(int &mark1,int &mark2,int &mark3) {      
    cout << "please enter the first number"<<endl;
    cin >>mark1;
    cout << "enter the second number" << endl;
    cin >> mark2;
    cout << "enter the third number" << endl;
    cin >>mark3;
  
}
//دالة العمليات
int operation(int num1,int num2,int num3) {
    int sum;
    sum = num1 + num2 + num3;
    return sum;
}
//دالة لحساب المتوسط
float calculateaverage(int num1, int num2, int num3) {
    return (float) operation( num1,  num2,  num3) / 3;
}
//دالة الطباعة
void print(float sum) {
    cout << "the Average of the three numbers is " << sum ;
}
//دالة للنجاح او الرسوب
passfail check() {

}

int main()
{
    int mark1, mark2, mark3;
    getnum(mark1, mark2, mark3);
    print(calculateaverage(mark1, mark2, mark3));
    
}
int main()
{st info = getarray();
	
printmax(max(info));
}



