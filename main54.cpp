#include<bits/stdc++.h>
using namespace std;

/*int noofXORpair(int arr[], int n)
{
  sort(arr,arr+n);

  int count=1;
  int ans=0;

  for(int i=1;i<n;i++){
      if(arr[i]==arr[i-1]){
          count++;
      }
      else{
          ans=ans+(count*(count-1)/2);
          count=1;
      }
  }
  ans=ans+(count*(count-1)/2);

  return ans;

}*/

int noofXORpair(int arr[], int n)
{
    int *maximum=max_element(arr,arr+n);

    int count[*maximum+1]={0};

    int ans=0;

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    int m=sizeof(count)/sizeof(count[0]);


    for(int i=0;i<m;i++){
        ans=ans+count[i]*(count[i]-1);
    }

    return ans/2;
}

int main()
{
    //int arr[]={1, 3, 4, 1, 4};
    //int arr[]={2, 2, 2};
    int arr[]={ 1, 2, 1, 2, 4 };

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<noofXORpair(arr,n);

    return 0;
}