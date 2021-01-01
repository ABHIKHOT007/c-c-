#include<bits/stdc++.h>
using namespace std;

class Geeks
{
public:
    int id;

    ~Geeks()
    {
        cout<<"Destructor is called:"<<id<<endl;
    }
};

int main()
{
    Geeks O1;
    O1.id=10;
    int i=1;
    while(i<8)
    {
        Geeks O2;
        O2.id=i;
        i++;
    }

    return 0;
}
