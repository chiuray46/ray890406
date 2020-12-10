#include <iostream>

using namespace std;
void printcin(int&);
int main()
{
    int a;
    cin >> a;
    printcin(a);
    cout << a << endl;
    return 0;
}
void printcin(int&b)
{
    cout << b << endl;
}
