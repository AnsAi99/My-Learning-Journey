

#include <iostream>
using namespace std;
void printTableheader() {
	cout << "\n" << "\n" << "\n" << "\t  \t \t " << "multiblication table from one to ten \t \t \n\n";
	for (int i = 1; i < 10; i++)
	{
		cout << "   \t" << i<<" ";		
	}
	cout << "\n-------------------------------------------------------------------------------\n";
}
string seprator(int i) {
	if (i < 10) 
		return "  |";
	else
		return" |";
	
}
void printMultiblcationTable() {
	printTableheader();
	for (int i = 1; i < 10; i++) {
		cout <<" "<< i << seprator(i);
		for (int j = 1; j < 10; j++)
		{
			cout<<"\t" << i * j;
		}
		cout << endl;
	}

}
int main()
{
	printMultiblcationTable();
}
