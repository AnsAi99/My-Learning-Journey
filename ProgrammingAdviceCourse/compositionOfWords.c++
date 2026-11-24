#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void printPatternLetter()
{
    ofstream outFile("output.text");
    if (!outFile.is_open())
    {
        cout << "the file has not exist" << endl;
        return;
    }
    string word = "";
    for (int i = 65; i <= 90; i++)
    {

        for (int j = 65; j <= 90; j++)
        {

            for (int n = 65; n <= 90; n++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(n);
                cout << word << endl;
                outFile << word << "\n";
                word = "";
            }
        }
    }
      outFile.close();
    cout << "the file saved successgully" << endl;
}
int main()
{
    printPatternLetter();
}
