#include<bits/stdc++.h>
using namespace std;

int main()
{
    //o(n2)sloution
    int i,j;
    int arr[]={9, 7, 5, 3};
    int n=sizeof(arr)/sizeof(arr[i]);
    int count=0;
    int k=6;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%k==0){
                count++;
            }
        }
    }
    if(count>=1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}