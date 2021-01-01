/*#include <iostream>
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

//base class
class Fare
{
	public:
	Fare()
	{
		cout<<"Fare of Vehicle\n";
	}
};

// first sub class
class Car: public Vehicle
{

};

// second sub class
class Bus: public Vehicle, public Fare
{

};

int main()
{
	// creating object of sub class will
	// invoke the constructor of base class
	Bus obj2;
	return 0;
}*/


	class ClassA
	{
			public:
			int a;
	};

	class ClassB : virtual public ClassA
	{
			public:
			int b;
	};
	class ClassC : virtual public ClassA
	{
			public:
			int c;
	};

	class ClassD : public ClassB, public ClassC
	{
			public:
			int d;
	};

	void main()
	{

			ClassD obj;

			obj.a = 10;	 //Statement 3
			obj.a = 100;	 //Statement 4

			obj.b = 20;
			obj.c = 30;
			obj.d = 40;

			cout<< "\n A : "<< obj.a;
			cout<< "\n B : "<< obj.b;
			cout<< "\n C : "<< obj.c;
			cout<< "\n D : "<< obj.d;

	}

