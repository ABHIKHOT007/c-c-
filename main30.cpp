#include<bits/stdc++.h>
using namespace std;

bool checkcount(int arr[], int n, int k)
{
     int count;
     //o(^2);
        /* for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(count>2*k){
                return false;
            }
        }
    }
    return true;*/
    //o(n)
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(auto i : hash){
        count=0;
        if(i.second>1){
            count++;
        }
        if(count>2*k){
            return false;
        }
    }
    return true;
   
}

int main()
{
    int arr[]={1,1,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    checkcount(arr,n,k)?cout<<"Yes":cout<<"No";
    return 0;
}