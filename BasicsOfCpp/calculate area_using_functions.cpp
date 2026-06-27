#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>

using namespace std;
void GetRectangleInfo(float& side, float& diagonal) {
	cout << "please enter the side length " << endl;
	cin >> side;
	cout << "please enter diagonal length" << endl;
	cin >> diagonal;
}
float Calcualte(float side, float diagonal) {
	
	float otherside = sqrt(pow(diagonal, 2) - pow(side, 2));
	float area = (side* otherside);
	if (side > diagonal)
		return area = 0;
	return area;

}
void PrintRectangl(float area) {
	if (area == 0)
		cout << "the side cant be more than diagonal" << endl;
	else
	cout << "the rectangular area is " << area<<endl;
}
void GetTrangleInfo(float& h,float &b) {
	cout << "please enter the hight of trangle " << endl;
	cin >> h;
	cout << "please enter the base of trangle" << endl;
	cin >> b;
}
float CalculateTrangle(float h, float b) {
	float area = 0.5 * h * b;
	return area;
}
void PrintTrangle(float area) {
	cout << "area = " << area;
}
float GetCircleInfo() {
	float ra;
	cout << "please enter the radius circle " << endl;
	cin >> ra;
	return ra;
}
float CalculateCircle(float ra) {
	const float pi= 3.14;
	double area =  pi * pow(ra, 2);
	return area;
}
void PrintCircle(float area) {
	cout << " circle area = " << area << endl;
}
float GetDiameter() {
	float dia;
	cout << "please enter the diameter circle " << endl;
	cin >> dia;
	return dia;
}
double CalculateCircleByDiameter(float dia) {
	
	double area = (M_PI * pow(dia, 2))/4;
	return area;
}
float GetSquareSide() {
	float dia;
	cout << "please enter square side length " << endl;
	cin >> dia;
	return dia;
}
float Getcercum() {
	float circumfrence;
	cout << "please enter the cercumfrence " << endl;
	cin >> circumfrence;
	return circumfrence;
}
double CalculateCircleBycercumfrence( float circumfrence) {
	
	float area = pow(circumfrence, 2) / (4 * M_PI);
	return area;
}
void GetIsoscelesTrangle(float& tsl, float& tbl) {
	cout << "please enter the side length " << endl;
	cin >> tsl;
	cout << "please enter the base length " << endl;
	cin >> tbl;
}
double CalculateCircleByITrangle(float tsl,float tbl) {
    double area = M_PI * pow(tbl, 2) / 4 * ((2 * tsl - tbl) / (2 * tsl + tbl));
	return area;
}
void GetTranglesides(float &a,float &b,float &c) {
	cout << "please enter the first side length" << endl;
	cin >> a;
	cout << "please enter the second side length " << endl;
	cin >> b;
	cout << "please enter the third side length" << endl;
	cin >> c;
}
double CalcCircleByATrangle(float a,float b, float c) {
	float p = (a + b + c) / 2;
	double area;
	float t= (a * b * c) /(4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	area = M_PI * pow(t, 2);
	return area;
}
int main() {
	/* Õ”«» «·„” ÿÌ·
	float side, diagonal;
	GetRectangleInfo(side, diagonal);
	PrintRectangle(Calcualte(side, diagonal));
	*/
	/*Õ”«» «·„À·À
	float h, b;
	GetTrangleInfo(h, b);
	PrintTrangle(CalculateTrangle(h, b));
*/
	
	/*PrintCircle(CalculateCircle(GetCircleInfo()));*/
	/*PrintCircle(CalculateCircleByDiameter(GetDiameter()))*/
	/*PrintCircle(CalculateCircleByDiameter(GetSquareSide()));*/
/*	PrintCircle(CalculateCircleBycercumfrence(Getcercum()));*/
	/*float tsl, tbl;
	GetIsoscelesTrangle(tsl, tbl);
	PrintCircle(CalculateCircleByITrangle(tsl,tbl));*/
	float a, b, c;
	GetTranglesides(a, b, c);
	PrintCircle(CalcCircleByATrangle(a, b, c));
}