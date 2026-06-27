
#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    int ans;
    double l, w, a, dia, h, b, s1, s2, s3, r,s,p,ra;
    float ang;
    const double pi = 3.14159265358979323846;
    cout << "wellcom to program to calculate area" << endl;
    cout << "what do you want to calculate " << endl << "please enter the number of shape you want to calculate" <<
        "(1.rectangle,2.trangle,3.square,4.circl,5.trapezoid,6.rhombus)" << endl;
    cin >> ans;


    switch (ans)
    {
    case 1:cout << "wich one do you have(1.(length+width) -2.(width+diagonal)-3.(length +diagonal))" << endl;
        int ans2;
        cin >> ans2;
        switch (ans2)
        {
        case 1:cout << "enter length" << endl;;
            cin >> l;
            cout << "enter width" << endl;
            cin >> w;
            a = w * l;
            cout << "the area of the rectangle is" << a << endl;
            break;
        case 2:cout << "enter width";
            cin >> w;
            cout << "enter diagonal";
            cin >> dia;
            l = sqrt(pow(dia, 2) - pow(w, 2));
            a = l * w;
            cout << "the area of the rectangle is " << a << endl;
            break;
        case 3:cout << "enter length" << endl;
            cin >> l;
            cout << "enter diagonal" << endl;
            cin >> dia;
            w = sqrt(pow(dia, 2) - pow(l, 2));
            a = l * w;
            cout << "the area of the rectangle is " << a << endl;
            break;
        default:cout << "please enter a number of your chioce" << endl;
            break;
        }
    case 2:int ans3;
        cout << "wich one do you have (1.(hight+base)-2.(three sides of trangle)-3.(tow sides including angle))" << endl;
        cin >> ans3;
        switch (ans3)
        {
        case 1:cout << "enter the hight " << endl;
            cin >> h;
            cout << "enter the base " << endl;
            cin >> b;
            a = 0.5 * h * b;
            cout << "the area of the trangle is " << a << endl;
            break;
        case 2:
            float t, b, c, s;
            cout << "enter the three sides one by one" << endl;
            cin >> t >> b >> c;
            s = (t + b + c) / 2;
            a = sqrt(s * (s - t) * (s - b) * (s - c));
            cout << "the area of the trangle is " << a << endl;
            break;
        case 3:
            cout << "enter the tow sides one by one " << endl;
            cin >> s1 >> s2;
            cout << "enter the angle ";
            cin >> ang;
            r = ang * (pi / 180.0);
            a = 0.5 * s1 * s2 * sin(r);
            cout << "the area of the trangle is " << a << endl;
        default:cout << "please enter the number of your choice";
            break;
        }
    case 3:int ans4;
        cout << "wich one do you have(1.(side)-2.(diagonal)-3.(perimeter))" << endl;
        cin >> ans4;
        switch (ans4)
        {
        case 1:
            cout << "enter the side" << endl;
            cin >> s;
            a = pow(s, 2);
            cout << "the area of the square is " << a << endl;
            break;
        case 2:cout << "enter diagonal " << endl;
            cin >> dia;
            s = pow(dia, 2) / 2;
            a = pow(s, 2);
            cout << "the area of the square is " << a << endl;
            break;
        case 3:cout << "enter the perimeter  " << endl;
            cin >> p;
            s = p / 4;
            a = pow(s, 2);
        default:cout << "please enter the number of your choice";
            break;
        }
        case 4:int ans5;
            cout << "what do you have(1.(radious)-2.(diameter)-3.(cecumference))" << endl;
            cin >> ans5;
            switch (ans5)
            {
            case 1:cout << "enter the radious " << endl;
                cin >> ra;
                a = pi * pow(ra , 2);
                cout << "the area of the circle is " << a << endl;
                break;

            case 2:cout << "enter diameter " << endl;
                cin >> dia;
                a = pi * pow(dia / 2, 2);
                cout << "the area of the circle is " << a << endl;
                break;
            case 3:double c;
                cout << "enter cercumference" << endl;
                cin >> c;
                ra = c / 2*pi;
                a = pi * pow(ra, 2);
                cout << "the area of the circle is " << a << endl;
                break;
            default:cout << "please enter the number of your choice";
                break;
            }
        case 5:int ans6;
            cout << "what do you have(1.(base+base)-2.(four sides)) " << endl;
            cin >> ans6;
            switch (ans6)
            {
                double b1, b2;
            case 1:cout << "enter tow bases one by one " << endl;
                cin >> b1 >> b2;
                cout << "enter hight " << endl;
                cin >> h;
                a = 0.5 * (b1 + b2) * h;
                cout << "the area of the strapezoid is " << a << endl;
                break;
            case 2:double s1,s2,s3,s4,j;
                
                cout << "enter  the four sides one by one " << endl;
                cin >> s1>>s2>>s3>>s4;
                j = (s1 + s2 + s3 + s4) / 2;
                a = sqrt((j - s1) * (j - s2) * (j - s3) * (j - s4));
                cout << "the area of the strapezoid is " << a << endl;
                break;
            
                
            default:cout << "please enter the number of your choice";
                break;
            }
        case 6:int ans7;
            cout << "what do you have(1.(side+hight)-2.(tow diagonals)-3.(side+angle)-4.(perimeter +hight))" << endl;
            cin >> ans7;
            switch (ans7)
            {
            case 1:cout << "enter the side " << endl;
                cin >> s;
                cout << "enter hight" << endl;
                cin >> h;
                a = s * h;
                cout << "the area of the rhombus is " << a << endl;
                break;
            case 2:double d1, d2;
                cout << "enter the diagonals one by one" << endl;
                cin >> d1 >> d2;
                a = (d1 * d2) / 2;
                cout << "the area of the rhombus is " << a << endl;
                break;
            case 3:cout << "enter the side" << endl;
                cin >> s;
                cout << "enter the angle" << endl;
                cin >> ang;
                r = ang * (pi / 180.0);
                a = pow(s, 2) * sin(r);
                cout << "the area of the rhombus is " << a << endl;
                break;
            case 4:cout << "enter perimeter " << endl;
                cin >> p;
                s = p / 4;
                cout << "enter the hight " << endl;
                cin >> h;
                a = s * h;
                cout << "the area of the rhombus is " << a << endl;
            default:
                break; cout << "please enter the number of your choice";
            }
    default:cout << "please enter the number of your choice";
        break;

    }
    return 0;
}
