#include <iostream>

using namespace std;

void func(int&, int&);
int main(void)
{
    int a,b;
    cin>>a>>b;
    func(a,b);


    return 0;
}
void func(int&a,int&b){
    if(a>b){
        cout<<a << " "<< b<<endl;
    }
    if(b>a){
        cout<<b  << " " <<a<<endl;
    }
}
