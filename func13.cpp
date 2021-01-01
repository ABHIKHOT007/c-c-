#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    int no,passno;
    long long price;
    Vehicle()
    {
        cout<<"this is a sport vehicle:"<<endl;
        cout<<"enter your vehicle no:"<<endl;
        cin>>no;
        cout<<"enter your vehicle passing no:"<<endl;
        cin>>passno;
        cout<<"enter your vehicle price:"<<endl;
        cin>>price;
    }

    void show()
    {
        cout<<"Vehicle No:"<<no<<endl;
        cout<<"Vehicle passing No:"<<passno<<endl;
        cout<<"Vehicle price:"<<price<<endl;
    }
};

class car : public Vehicle
{

};

int main()
{
    car c;

    return 0;
}
