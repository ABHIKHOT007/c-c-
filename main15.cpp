#include<bits/stdc++.h>
using namespace std;

bool findpair(int arr[], int n)
{
    map<int,pair<int,int>>hash;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if(hash.find(sum)==hash.end()){
                hash[sum]=make_pair(i,j);
            }
            else{
                pair<int,int>pp=hash[sum];

                cout<<"("<<arr[pp.first]<<" "<<arr[pp.second]<<")"<<"\n"<<"("<<arr[i]<<" "<<arr[j]<<")"<<endl;

                return true;
            }
        }
    }

    cout<<"No pair found"<<endl;
    return false;
}

int main()
{
    int arr[]={3,4,7,2,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    findpair(arr,n);
    return 0;
}
