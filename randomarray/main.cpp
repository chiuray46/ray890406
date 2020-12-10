#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void find_max(int array1[3],int*m);
int main()
{
    int array1[3];
    int *m;

    srand(time(NULL));
    for (int i=0;i<3;i++)
    {
        array1[i]=(rand()%10)+1;
        cout << array1[i] <<" " ;
    }

    find_max( array1, m);
    cout << "Max:" << *m << endl;



}

void find_max(int array1[3],int*m)
{
    int a = 0;
    for (int i = 0; i<3; i++)
    {
        if (array1[i] > a)
        {
            a = array1[i];
        }
    }
    *m = a ;
}
