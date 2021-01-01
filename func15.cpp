#include<bits/stdc++.h>
using namespace std;

/*class Vehicle
{
public:
    Vehicle()
    {
        cout<<"this is vehicle:"<<endl;
    }
};

class fourwheeler : public Vehicle
{
public:
    fourwheeler()
    {
        cout<<"with  wheels"<<endl;
    }
};

class car : public fourwheeler
{
public:
    car()
    {
        cout<<"car has 4 wheels"<<endl;
    }
};

int main()
{
    car c;
    return 0;
}
*/

// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
	Vehicle()
	{
	cout << "This is a Vehicle" << endl;
	}
};


// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle
{

};
int main()
{

	Car obj1;
	Bus obj2;
	return 0;
}
