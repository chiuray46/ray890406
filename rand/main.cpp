#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;
int ave(void);
int main()
{
    int x[1000];
    srand(time(NULL));
    for (int i = 0;i<1000;i++)
    {
         x[i] = (rand()%9999)+1;
    }
    ofstream ofile ("C:\\Users\\ray89\\Downloads\\practice2.txt",ios::out);

    for (int j = 0; j<1000 ;j++)
    {
        ofile << x[j] <<' ';
    }
    ave();

    return 0;
}
int ave(void)
{
    int num,sum=0,j=0;
    ifstream inf("C:\\Users\\ray89\\Downloads\\practice2.txt",ios::in);
    while(!inf.eof()){
        inf>>num;
        sum+=num;
    }
    inf.close();
    cout<<"ave is "<<sum/1000<<endl;
    return 0;
}
