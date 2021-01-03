#include<bits/stdc++.h>
using namespace std;

int subseteven(int arr[], int n)
{
    unordered_set<int> s;

    int even_count=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            s.insert(arr[i]);
        }
    }

    even_count=s.size();

    return (pow(2,even_count)-1);
}
int main()
{
    int arr[]={4,2,1,9,2,6,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Number of subset of only even elements:"<<subseteven(arr,n)<<endl;
    return 0;
}