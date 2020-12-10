#ifndef CROBOT_H_INCLUDED
#define CROBOT_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;
class Crobot
{
    private:
        int life,power;
        string name;
        static int num;
    public :
        int l,n,p;
        setnumber(char n,int p)
        {
            name = n;
            power = p;
            life = 100;
            l = life;
        }
        void greety(void)
        {
            cout << "Hello, my name is " << name <<endl;
        }




        static void count (void)
        {
            cout << "c" <<endl;
        }

};

int c;

int fight(int u,int v,int w,int x,int y,int z)
{
    int a[2],b[2],win = 0;

        a[0]=u;
        a[1]=v;
        a[2]=w;
        b[0]=x;
        b[1]=y;
        b[2]=z;

    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3; j++)
        {
            while (i != j)
            {
                a[i] =  a[i] -  b[j];
            }
        }

    }
    for(int k = 0; k < 3; k ++)
    {
        if (a[k] > win)
        {
            win = a[k];
            return k;
        }

    }

}

#endif // CROBOT_H_INCLUDED
