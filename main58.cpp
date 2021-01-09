#include<bits/stdc++.h>
using namespace std;

/*int maxlenght(int arr[], int n)
{
    int sum=0;
    int maxsize=-1,startindex;

    for(int i=0;i<n-1;i++){
        sum=(arr[i]==0)?-1:1;

        for(int j=i+1;j<n;j++){
            (arr[i]==0)?(sum+-1):(sum+=1);

            if(sum==0 && maxsize<j-i+1){
                maxsize=j-i+1;
                startindex=i;
            }
        }
    }

    if(maxsize==-1){
        cout<<"No such aubarray exits"<<endl;
    }
    else{
        cout<<startindex<<"to"<<startindex+maxsize-1<<endl;
    }

    return maxsize;
}*/

int maxlenght(int arr[], int n)
{
    unordered_map<int,int> hash;

    int sum=0;
    int max_lenght=0;
    int end_index=-1;

    for(int i=0;i<n;i++){
        arr[i]=(arr[i]==0)?-1:1;
    }

    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum==0){
            max_lenght=i+1;
            end_index=i;
        }

        if(hash.find(sum+n)!=hash.end()){
            if(max_lenght<i-hash[sum+n]){
                max_lenght=i-hash[sum+n];
                end_index=i;
            }
        }
        else{
            hash[sum+n]=i;
        }
    }

    for(int i=0;i<n;i++){
        arr[i] = (arr[i]==-1) ? 0 : 1;

    }

    cout<<end_index-max_lenght+1<<"to"<<end_index<<endl;

    return max_lenght;
}

int main()
{
    int arr[]= { 1, 0, 0, 1, 0, 1, 1 };
    int n=sizeof(arr)/sizeof(arr[0]);
    maxlenght(arr,n);

    return 0;
}