#include<bits/stdc++.h>
using namespace std;

/*o(logn)

int diffinfreq(int arr[], int n)
{
    sort(arr,arr+n);

    int count=0,max_count=0,min_count=0;

    for(int i=0;i<(n-1);i++){
        if(arr[i]==arr[i+1]){
            count++;
            continue;
        }
        else{
            max_count=max(max_count,count);
            min_count=min(min_count,count);
        }
    }

    return (max_count - min_count);
}*/

//o(n)

int diffinfreq(int arr[], int n)
{
    unordered_map<int,int>hash;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int max_count=0,min_count=0;

    for(auto i:hash){
        max_count=max(max_count,i.second);
        min_count=min(min_count,i.second);
    }

    return (max_count - min_count);
}

int main()
{
    int arr[]={7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"max difference of freq is:"<<diffinfreq(arr,n)<<endl;

    return 0;
}