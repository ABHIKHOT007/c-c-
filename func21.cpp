#include<bits/stdc++.h>
using namespace std;

class A
{
    int a;
public:
    A(){a=0;}
    friend void showA(A&);
};

void showA(A& x)
{
    cout<<"A::a"<<x.a<<endl;
};

int main()
{
    A a;
    showA(a);
    return 0;
}
