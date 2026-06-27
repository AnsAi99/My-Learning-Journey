

#include <iostream>
using namespace std;
int main()
{
    int d, h, m, s, eh,ts,th, tm,em,es;   /*
    cout << "how many days did you work  " << endl;
    cin >> d;
    cout << "how many hours did you work  " << endl;
    cin >> h;
    cout << "how many minuts did you work  " << endl;
    cin >> m;
    cout << "how many seconds did you work" << endl;
    cin >> s;
    s = m * 60 + h * 60 * 60 + d * 60 * 60 * 24 + s;
    cout << "you have worked " << s << "seconds" << endl;*/

    cout << "enter the seconds  " << endl;
    cin >> ts;
    d = ts / (60 * 60 * 24);
    h = ts / 3600;
    m = ts / 60;
    
    eh = ts% (60*60*24);
    th = eh / 3600;
    em = eh % 3600;
    tm = em / 60;
    es = em % 60;
    s = es;
    

    cout << "there is " <<d << "days" << th << "hours" << tm << "minuts" << es << "seconds" << endl;
}