#include<bits/stdc++.h>
using namespace std;

class point
{
private:
    int x,y;
public:
    point(int x1,int y1){x=x1;y=y1;}

    point(const point &p2){x=p2.y;y=p2.x;}

    int getx(){return x;}
    int gety(){return y;}
};

int main()
{
    point p1(100,200);
    point p2=p1;

    cout<<p1.getx()<<"\n"<<p1.gety()<<endl;
    cout<<"copy constructor is called"<<endl;
    cout<<p2.getx()<<"\n"<<p2.gety()<<endl;

    return 0;
}
