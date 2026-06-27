
#include <iostream>
using namespace std;
int main()
{
	int min, nu = 0, x;
	int s[10];
	cout << "enter the number of student" << endl;
	cin >> x;

	for (int i = 0; i < x; i++) {
		cout << "enter the mark of" << i + 1 << " student" << endl;
		cin >> s[i];
		min = s[0];
	}
	for (int i = 0; i < x; i++)
	{
		if (s[i] < min)
		{
			min = s[i];

		}
	}
			for (int i = 0; i < x; i++) {
				if (s[i] == min)
					nu++;

			}
		
	cout << "the lowest mark is" << min << endl;
	
	cout << "there are " << nu << "student got this mark";
	
}
