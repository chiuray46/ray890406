#include <iostream>
#include <cstring>
using namespace std;
int power(int,int);
double power(double,int);

int main(void)
{
    int in,index;
    double floating;
    cout << "enter positive integer" << endl;
    cin >> in;
    cout << "enter floating-point number" << endl;
    cin >> floating;
    cout << "enter index" << endl;
    cin >> index;
    cout << power(in,index) << endl;
    cout << power(floating,index) << endl;
}
int power(int in,int index)
{
    int a = in;
    for (int i = 1 ; i < index;i++)
    {

        in = in * a ;

    }
    return in;
}
double power(double in, int index)
{
    double a = in ;
    for (int i = 1 ; i < index;i++)
    {

        in = in * a ;

    }
    return in;
}
