#include<bits/stdc++.h>
using namespace std;

class Geeks
{
public:
    void func(int x)
    {
        cout<<"value of x:"<<x<<endl;
    }
    void func(double x)
    {
        cout<<"value of x:"<<x<<endl;
    }
    void func(int x, int y)
    {
        cout<<"value of x:"<<x<<"&"<<"value of y:"<<y<<endl;
    }
};

int main()
{
    Geeks O;
    O.func(10);
    O.func(99.99);
    O.func(100,200);

    return 0;
}
