#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{

    char ch;
    int a=0,e=0,i=0,o=0,u=0;
    fstream inf;
    inf.open("C:\\Users\\ray89\\Downloads\\practice1.txt",ios::in);

    while(!inf.eof())
    {
        inf.get(ch);

    if (ch == 'a')
        a++;
    if (ch == 'e')
        e++;
    if (ch == 'i')
        i++;
    if (ch == 'o')
        o++;
    if (ch == 'u')
        u++;
    }





    cout << a << endl;
    cout << e << endl;
    cout << i << endl;
    cout << o << endl;
    cout << u << endl;

    return 0;
}

