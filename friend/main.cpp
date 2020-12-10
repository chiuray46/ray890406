#include <iostream>
#include<math.h>
using namespace std;
class tri
{
private:
    double edge1,edge2,edge3;
    friend double show_data(tri);
public:
    tri(int e1,int e2,int e3){
    edge1 = e1;
    edge2 = e2;
    edge3 = e3;
    cout << edge1 << edge2 << edge3 <<endl;
    }
    tri(){
    edge1=3;
    edge2=4;
    edge3=5;
    cout << edge1 << edge2 << edge3 <<endl;
    }
    void set(double a,double b,double c)
    {

            edge1 = a;
            edge2 = b;
            edge3 = c;

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
            return 0;
        }
        else {
            double s = (edge1+edge2+edge3)/2;
            return sqrt(s*(s-edge1)*(s-edge2)*(s-edge3));
        }

    }
    double perimeter(){
        if (istri() == 0){
            cout << "not a triangle." <<endl;
            return 0;
        }
        else
            return edge1+edge2+edge3;

    }
};
int main()
{
    tri();
    tri(5,12,13);
    tri tr;
    double a, b, c;
    cin >>  a >> b >> c;
    tr.set(a,b,c);
    tr. istri();
    cout  << tr.area() << endl ;
    cout  <<tr.perimeter() << endl;
    show_data(tr);
    return 0;
}
double show_data(tri tr)
{
    cout << tr.edge1 <<" "<< tr.edge2 <<" " <<tr.edge3;
}
