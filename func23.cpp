#include<bits/stdc++.h>
using namespace std;

class point
{
private:
    int x,y;
public:
    point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    point p(100,200);

    cout<<p.getX()<<"\n"<<p.getY()<<endl;
    return 0;
}
