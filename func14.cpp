#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout<<"this is vehicle"<<endl;
    }
};
class twowheeler
{
public:
    twowheeler()
    {
        cout<<"this is two wheeler Vehicle"<<endl;
    }
};
class fourwheeler
{
public:
    fourwheeler()
    {
        cout<<"this is a four wheeler Vehicle"<<endl;
    }
};

class car : public Vehicle,public twowheeler, public fourwheeler
{


};

int main()
{
    car c;

    return 0;
}
