#include <iostream>
#include<math.h>
using namespace std;
class tri
{
private:
    double edge1,edge2,edge3;
public:
    tri(double a,double b,double c)
    {

            edge1 = a;
            edge2 = b;
            edge3 = c;

    }
    tri()
    {
        edge1=3;
        edge2=4;
        edge3=5;
    }
    bool istri(){
        if ((edge1 < edge2 + edge3)&&(edge3 < edge2 + edge1)&&(edge2 < edge1 + edge3)){
            return 1;
        }
        else {

            return 0;
        }
    }
    double area(){
        if (istri() == 0){
            cout << "not a triangle." <<endl;
        }
        else {
            double s = (edge1+edge2+edge3)/2;
            return sqrt(s*(s-edge1)*(s-edge2)*(s-edge3));
        }

    }
    double perimeter(){
        if (istri() == 0){
            cout << "not a triangle." <<endl;
        }
        else
            return edge1+edge2+edge3;

    }

};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
