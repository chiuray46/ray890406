#include "Crobot.h"


int main()
{
    Crobot a[2];

     a[0].setnumber('one',10);
     a[1].setnumber('two',1);
     a[2].setnumber('three',5);

    a[0].greety();
    a[1].greety();
    a[2].greety();

    fight(a[0].l , a[1].l , a[2].l , a[0].p , a[1].p , a[2].p);

    return 0;
}
