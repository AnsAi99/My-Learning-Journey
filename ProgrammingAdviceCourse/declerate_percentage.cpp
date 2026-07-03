

#include <iostream>
using namespace std;
int GetTotalSales() {
    int totalsales;
    cout << "enter total sales " << endl;
    cin >> totalsales;
    return totalsales;
}

float GetCommertionPercentage(int totalsales) {
   
    if (totalsales >= 1000000)
        return 0.01;
    else if (totalsales >= 500000)
        return 0.02;
    else if (totalsales >= 100000)
        return 0.03;
    else if (totalsales >=50000 )
        return 0.05;
    
    else
        return 0.0;
}
float CalculateCommertionPercentage(float totalsales) {
  return  GetCommertionPercentage(totalsales)* totalsales;
}
int main()
{
    float totalsales = GetTotalSales();
    cout << "\n your commecial is " << GetCommertionPercentage(totalsales);
    cout << "\n total commetion is " << CalculateCommertionPercentage(totalsales);
}
