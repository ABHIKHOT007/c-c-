#include<bits/stdc++.h>
using namespace std;

class Geeks
{
public:
    int id;

    Geeks()
    {
        cout<<"default constructor called"<<endl;
        id=-1;
    }
    Geeks(int x)
    {
        cout<<"parametrized constructor called:"<<endl;
        id=x;
    }
};

int main()
{
    Geeks o1;
    cout<<"Geeks id is:"<<o1.id<<endl;

    Geeks o2(21);
    cout<<"Geek id is:"<<o2.id<<endl;

    return 0;
}
