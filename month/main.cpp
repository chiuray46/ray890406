#include <iostream>

using namespace std;
int month(int,int);
int main()
{

    int a,b;
    cin>>a>>b;

    cout<< month(a,b) <<endl;
    return 0;
}
int month(int a,int b){
    int c;

    if (a > 12){

        cout<<"error";
        }
    if (a ==12){

       c = b+335;

        }
     if (a == 11){

       c = b+335-30;

        }
     if (a == 10){

       c = b+335-30-31;

        }
     if (a == 9){

       c = b+335-30-31-30;

        }
     if (a == 8){

       c = b+213;

        }
     if (a == 7){

       c = b+182;

        }
     if (a == 6){

       c = b+152;

        }
     if (a == 5){

       c = b+121;

        }
     if (a == 4){

       c = b+91;
     }
    if (a == 3){

       c = b+60;
        }
    if (a == 2){

       c = b+31;
        }
    if (a == 1){

       c = b;
        }
    return c;
}

