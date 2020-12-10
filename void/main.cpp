#include <iostream>

using namespace std;
void func(int , int , int &);
int main()
{
    int result;
    func(2,5,result);

    cout << result << endl;
    return 0;
}
void func(int a, int b , int &result1)
{
    result1 = a + b;
}

