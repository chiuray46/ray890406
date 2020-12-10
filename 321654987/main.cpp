#include <iostream>

using namespace std;
void set1 (int, int);
class Cbox
{
private:
  int width;
    int height;
    public:
    int area()
    {
        return width*height;
    }


    void set1( int a, int b)
{
    width=b;
    height=a;
}

};
int main()
{
    Cbox box;

    box.set1( 500,60);
    cout << box.area() << endl;

    return 0;
}
