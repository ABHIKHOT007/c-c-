#include<bits/stdc++.h>
using namespace std;

int longlength(int arr[], int n)
{
    unordered_map<int,int>hash;

    int longlen=0;

    for(int i=0;i<n;i++){
        int len=0;

        if(hash.find(arr[i]-1)!=hash.end()&&len<hash[arr[i]-1]){
            len=hash[arr[i]-1];
        }
        if(hash.find(arr[i]+1)!=hash.end()&&len<hash[arr[i]+1]){
            longlen=hash[arr[i]+1];
        }

        if(longlen<hash[arr[i]]){
            longlen=hash[arr[i]];
        }
    }
    return longlen;
}
int main()
{
    int arr[]={1, 2, 3, 4, 5, 3, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longlength(arr,n);

    return 0;

}