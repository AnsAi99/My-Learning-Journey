
#include <iostream>
using namespace std;
 
struct name
{
    string firstname;
    string lastname;
};
name getinfo() {
    name info;
    cout << "enter your first name " << endl;
    cin >> info.firstname;
    
    cout << "enter your last name" << endl;
    cin >> info.lastname;
    return info;

}
string getfullname( name info ,bool reversed) {
    string fullname = "";
    if (reversed)
        fullname = info.lastname + "" + info.firstname;
    else
    fullname = info.firstname + " " + info.lastname;
    return fullname;
}
void printname( string fullname) {
    cout << "your fullname is: " << fullname;
}
int main()
{
    printname(getfullname(getinfo(),rand));
}
