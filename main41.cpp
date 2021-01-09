#include<bits/stdc++.h>
using namespace std;

int topalidrome(string str)
{
    int count=0;

    if(str.length()%2==0){
        return -1;
    }
    unordered_map<int,int>hash;
    for(int i=0;i<str.length();i++){
        hash[str[i]]++;
    }

    for(auto i : hash){
        if(i.second%2==1){
            count++;
        }
    }
    return count-1;

}

int main()
{
    //string str = "geeksforgeeks";
    string str = "aabbc";

    cout<<"minimum number of the insertion required to become palidrome:"<<topalidrome(str)<<endl;
    return 0;
}

