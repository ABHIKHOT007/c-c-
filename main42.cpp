#include<bits/stdc++.h>
using namespace std;

bool ispalidrome(string &str)
{
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[str.length()-1-i]){
            return false;
        }
    }
    return true;
}

void Query(string &str, int q)
{
    int i1,i2;
    char ch;

    for(int j=1;j<=q;j++){
        cin>>i1>>i2;
        str[i1]=str[i2]=ch;

        (ispalidrome(str)==true)?cout<<"Yes" : cout<<"No";
    }
}

int main()
{
    string str="geeks";

    int q=2;
    
    Query(str,q);

    return 0;
}