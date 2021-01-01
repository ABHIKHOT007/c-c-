#include<bits/stdc++.h>
using namespace std;

class parent
{
public:
    int id_parent;
};
class child : public parent
{
public:
    int id_child;

    void input()
    {
        cout<<"enter the parent id:"<<endl;
        cin>>id_parent;
        cout<<"enter the child is:"<<endl;
        cin>>id_child;
    }
    void output()
    {
        cout<<"parent id is:"<<id_parent<<endl;
        cout<<"child id is:"<<id_child<<endl;
    }
};

int main()
{
    child C;
    C.input();
    C.output();

    /*C.id_child=100;
    C.id_parent=200;

    cout<<"child id is:"<<C.id_child<<endl;
    cout<<"parent id is:"<<C.id_parent<<endl;*/

    return 0;
}
