#include <iostream>
#include<math.h>
using namespace std;
class student
{
private:

    int name,mat,eng;
    friend int numpass(student stu[10] );
public:

    void set1(int n,int m,int e)
    {

            name = n;
            mat = m;
            eng = e;

    }
    bool pass(){

            if(mat+eng>=120){
             return 1;
        }
            else{
             return 0;
        }


}


};
int main()
{


    student stu[10];
    for(int k=0;k<10;k++){
    int n,m,e;
    cin >> n >> m >> e;
    stu[k].set1(n,m,e);

    }
    cout << numpass(stu) << endl;
    cout << 10-numpass(stu);
}
int numpass(student stu[10])
{
    int a = 0;
    for (int i=0;i<10;i++){
        if (stu[i].pass()==1){
            a = a + 1;
        }

    }
    return a;
}
