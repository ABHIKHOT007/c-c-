#include<bits/stdc++.h>
using namespace std;
const int ALPHA = 26;
string getdiff(string str)
{
    string shift="";
    for(int i=1;i<str.length();i++){
        int diff=str[i]-str[i-1];
        if(diff<0){
            diff+=ALPHA;
        }
        shift+=(diff+'a');
    }
    return shift;
}

void groupshiftedstring(string str[], int n)
{
    map<string,vector<int> >hash;

    for(int i=0;i<n;i++){
        string diffstr = getdiff(str[i]);
        hash[diffstr].push_back(i);
    }
    for(auto it=hash.begin();it!=hash.end();it++){
        vector<int> v = it->second;
        for(int i=0;i<v.size();i++){
            cout<<str[v[i]]<<"\n";
        }
        
    }
}
int main()
{
    string str[]={"acd", "dfg", "wyz", "yab", "mop","bdfh", "a", "x", "moqs"};
    int n=sizeof(str)/sizeof(str[0]);
    groupshiftedstring(str,n);
    return 0;
}