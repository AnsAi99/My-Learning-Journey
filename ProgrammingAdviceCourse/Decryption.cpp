#include <iostream>
#include <string>
using namespace std;
string readText()
{
    string text;
    cout << "please enter your name: ";
    getline(cin, text);
    return text;
}
string textEncryption(string text, short keyValue)
{
    for (int i = 0; i <= text.length(); i++)
    {
        text[i] = char((int)text[i] + keyValue);
    }
    return text;
}
string textDecryption(string encryptedText, short keyValue)
{
    for (int i = 0; i <= encryptedText.length(); i++)
    {
        encryptedText[i] = char((int)encryptedText[i] - keyValue);
    }
    return encryptedText;
}
int main()
{
    short keyValue = 2;
    string text = readText();
    string textAfterEncryption = textEncryption(text, keyValue);
    string textAfterDecryption = textDecryption(textAfterEncryption, keyValue);
    cout << "the name you entered is: " << text << endl;
    cout << "the name after encryption is: " << textAfterEncryption << endl;
    cout << "the name after decryption is: " << textAfterDecryption << endl;
    return 0;
}