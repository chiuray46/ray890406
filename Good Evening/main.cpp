#include <iostream>
#include <cstdlib>
using namespace std;
int cal();
int main()
{
    struct data {
        int id;
        string name;
        int mid,fina,regu,score;
    } student;
    cout << "enter id,name,mid,fina,regu";
    cin >> student.id >> student.name >> student.mid >> student.fina >> student.regu;
    student.score = student.mid*0.3+student.fina*0.3+ student.regu*0.4;
    cout << student.id << student.name << student.score << endl;
    return 0;
}

