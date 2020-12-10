#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main ()
{
    srand(time(NULL));
    int a [4];
    for (int i=0;i<4;i++)
    {

        a[i]=(rand()%10);
        if (a[0]==0)
        {
            a[0]=(rand()%9)+1;
        }


        for (int j=0;j<i;j++)
        {
            while(a[j]==a[i])
            {
                if (a[0] == a[i]){
                        a[0]=(rand()%9)+1;
            }
            a[i]=(rand()%10);
            }
        }


        cout << a[i];
    }

}

