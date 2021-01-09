#include<bits/stdc++.h>
using namespace std;

//o(n^2)

/*int maxdiffoffreq(int arr[], int n)
{
    int max_freq=0;
    int min_freq=0;

    unordered_map<int,int>hash;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    
    for(auto i:hash){
       max_freq=max(max_freq,i.second);
       min_freq=min(min_freq,i.second);
    }

    return (max_freq - min_freq)-1;
}*/

//o(n^2)

/*int maxdiffoffreq(int arr[], int n)
{
    unordered_map<int,int> hash;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(hash[arr[i]]>hash[arr[i]] && arr[i]>arr[j]){
                    ans=max(ans,hash[arr[i]]-hash[arr[j]]);
            }
            else if(hash[arr[i]]<hash[arr[i]] && arr[i]<arr[j]){
                ans=max(ans,hash[arr[j]]-hash[arr[i]]);
            }
        }
       
    }
     return ans;
}*/

//o(logn)

int maxdiffoffreq(int arr[], int n)
{
    unordered_map<int,int>hash;
    int dist[n];

    int j=0;
    for(int i=0;i<n;i++){
        if(hash.find(arr[i])==hash.end()){
            dist[j++]=arr[i];
        }
        hash[arr[i]]++;
    }

    sort(dist,dist+j);

    int min_freq=n+1;

    int ans=0;

    for(int i=0;i<n;i++){
        int curr_freq=hash[dist[i]];
        ans=max(ans,curr_freq - min_freq);
        min_freq=min(min_freq,curr_freq);
    }

    return ans;
}

int main()
{
    int arr[]={ 3, 1, 3, 2, 3, 2 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum length of the frequency difference is:"<<maxdiffoffreq(arr,n);
    return 0;
}