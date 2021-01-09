#include <bits/stdc++.h> 
using namespace std; 


int maxlengthofsubarray(int arr[], int n) 
{ 
	
	unordered_map<int, int> um; 
	
	int maxLen = 0; 
	
	
	for (int i=0; i<n; i++) 
	{ 
	
		int len = 0; 
		
	
		if (um.find(arr[i]-1) != um.end() && len < um[arr[i]-1]) 
			len = um[arr[i]-1]; 
		
	
		if (um.find(arr[i]) != um.end() && len < um[arr[i]]) 
			len = um[arr[i]]; 
			
		 
		if (um.find(arr[i]+1) != um.end() && len < um[arr[i]+1]) 
			len = um[arr[i]+1];	 
		
			 
		um[arr[i]] = len + 1; 
		
	
		if (maxLen < um[arr[i]])	 
			maxLen = um[arr[i]]; 
	} 
	

	return maxLen;		 
} 


int main() 
{ 
	int arr[] = {2, 5, 6, 3, 7, 6, 5, 8}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Maximum length subsequence = "
		<< maxlengthofsubarray(arr, n); 
	return 0; 
} 
