#include <iostream>
using namespace std;
string readPassword()
{
    string pass;
    cout << "please enter the real password by three capital letters" << endl;
    cin >> pass;
    return pass;
}
bool guesPassword(string readPassword)
{
    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {

            for (int n = 65; n <= 90; n++)
            {
                counter++;
                word = word + char(i);
                word = word + char(j);
                word = word + char(n);
                cout << "trial:[" << counter << "]" << word << "\n";
                if (word == readPassword)
                {
                    cout << "password is " << word << endl;
                    cout << "found after " << counter << " trials" << endl;
                    return true;
                }

                word = "";
            }
        }
    }
}
int main()
{
    cout << guesPassword(readPassword());
}