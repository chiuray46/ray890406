#include <iostream>
#include <cstdlib>
#include<math.h>

using namespace std;

float func(int,int);
int main ()
{
    int a,b;

    cout<<"Type here" <<"\n";
    cin>> a >> b;

    cout<<func( a,  b)<<endl;

    return 0;
 }

float func(int a, int b)
 {
     float c;

     c = sqrt(pow(a,2)+pow(b,2));

     return c;

 }
