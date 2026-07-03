
#include <iostream>
using namespace std;
enum oddnum {
    odd = 1, even = 2
};

int GetParaNum() {
    int N;
    cout << "please enter the number " << endl;
   cin >> N;
   return N;
}

oddnum CheckEvenOrOdd(int N) {
    if (N % 2 == 1)
        return oddnum::odd;
    else
        return oddnum::even;
}
void PrintByForLoop(int N) {
    int s = 0;
    cout << "range printed by for loop" << endl;
    for (int i = N; i >= 1; i--)
    {
        /*  cout << i << endl;*/
        if(CheckEvenOrOdd(i)==oddnum::even)
        s += i;
    }
    cout <<"the sum of even numbers from 1 to" << N <<" is "<< s << endl;
}

    void PrintByWhileLoop(int N) {
   
        cout << "range printed by while loop" << endl;
        int i = N,s = 0;
        while (i>=1)
        {
            /*cout << i<<endl;*/
            if (CheckEvenOrOdd(i) == oddnum::even)
                s += i;
            
            i--;
        }
        cout <<"the sum of even numbers from 1 to"<<N<<" is " <<s << endl;
}
    void PrintByDoWhileLoop(int N) {
        cout << "range printed by do while loop" << endl;
        int i = N,s=0;
        do
        {
            /*            cout << i<<endl;*/
            if (CheckEvenOrOdd(i) == oddnum::even)
                s += i;
            i--;
        } while (i>=1);
        cout << "the sum of even numbers from 1 to " << N <<" is "<< s << endl;
    }
int main()
{
    int N = GetParaNum();
    /*PrintByForLoop(N);
    PrintByDoWhileLoop(N);
    PrintByWhileLoop(N);*/

}
