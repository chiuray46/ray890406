#include <iostream>

using namespace std;

void sum(int&,int&);
int main(void)
{
    int a,b;
    cin >> a >> b ;
    sum(a,b);
    cout<< a <<endl;
    return 0;
}
void sum (int&a,int&b)
{



    a=a+b;
    return ;
}
