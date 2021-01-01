#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int kasha;
    long long cellphoneno;
    int grade;

    void input()
    {
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your class:"<<endl;
        cin>>kasha;
        cout<<"enter your phone number:"<<endl;
        cin>>cellphoneno;
        cout<<"enter your grade:"<<endl;
        cin>>grade;
    }

    void output()
    {
        cout<<"your name is:"<<name<<endl;
        cout<<"your class is:"<<kasha<<endl;
        cout<<"your cellphone no is:"<<cellphoneno<<endl;
        cout<<"your grade is:"<<grade<<endl;
    }
};

class info : public student
{
public:
    int lastyear;
    int lastplace;
    char gender;
    int height;
    char bloodgroup;
    int members;

    void take()
    {
        cout<<"enter your last year percentage:"<<endl;
        cin>>lastyear;
        cout<<"enter your last place to be moved:"<<endl;
        cin>>lastplace;
        cout<<"enter your gender:"<<endl;
        cin>>gender;
        cout<<"enter your blood group:"<<endl;
        cin>>bloodgroup;
        cout<<"enter family members no:"<<endl;
        cin>>members;
    }
    void show()
    {
        cout<<"personal information of the"<<name<<"is:"<<endl;
        cout<<"last year % are:"<<lastyear<<endl;
        cout<<"last place to be moved:"<<lastplace<<endl;
        cout<<"gender:"<<gender<<endl;
        cout<<"bloodgroup:"<<bloodgroup<<endl;
        cout<<"No of family members:"<<members<<endl;

    }
};

class print : public info
{
public:
    int id;

    void put()
    {
        cout<<"enter the id no:"<<endl;
        cin>>id;
        cout<<"your id no is:"<<id<<endl;
    }

};

int main()
{
    print p;
    p.input();
    p.output();
    p.take();
    p.show();
    p.put();

    return 0;
}
