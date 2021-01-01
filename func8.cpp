#include<bits/stdc++.h>
using namespace std;

class geeks
{
public:
    string geekname;
    char name;
    int dob;
    char edu;
    long long contactno;

    void printname()
    {
        cout<<"Geekname is:"<<geekname<<endl;
    }
    void show()
    {
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your date of birth:"<<endl;
        cin>>dob;
        cout<<"enter the education:"<<endl;
        cin>>edu;
        cout<<"enter the contact no:"<<endl;
        cin>>contactno;

    }
    void out()
    {
        cout<<"your name is:"<<name<<endl;
        cout<<"date of birth:"<<dob<<endl;
        cout<<"education qualification:"<<edu<<endl;
        cout<<"reach number:"<<contactno<<endl;
    }
};

int main()
{
    geeks g;
    g.show();
    g.out();
    g.printname();
    g.geekname="abhishek";

    return 0;

}
