#include <bits/stdc++.h> 
using namespace std; 


void divisibilityCheck(int arr[], int n) 
{ 

	
	unordered_set<int> s; 
	int max_ele = INT_MIN; 
	for (int i = 0; i < n; i++) { 
		s.insert(arr[i]); 

		 
		max_ele = max(max_ele, arr[i]); 
	} 

	
	unordered_set<int> res; 
	for (int i = 0; i < n; i++) { 

		if (arr[i] != 0) { 

			
			for (int j = arr[i] * 2; j <= max_ele; j += arr[i]) { 

			
				if (s.find(j) != s.end()) 
					res.insert(j); 
			} 
		} 
	} 
	unordered_map<int, int> mp; 
	for (int i = 0; i < n; i++) 
		mp[arr[i]]++; 

	unordered_map<int, int>::iterator it; 
	vector<int> ans; 
	for (it = mp.begin(); it != mp.end(); it++) { 

		
		if (it->second >= 2) { 
			if (res.find(it->first) == res.end()) { 

				
				int val = it->second; 

			
				while (val--) 
					ans.push_back(it->first); 
			} 
		}  
		if (res.find(it->first) != res.end()) { 
			int val = it->second; 

			 
			while (val--) 
				ans.push_back(it->first); 
		} 
	} 
	for (auto x : ans) 
		cout << x << " "; 
} 
 
int main() 
{ 
	int arr[] = { 2, 3, 8, 6, 9, 10 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	divisibilityCheck(arr, n); 

	return 0; 
} 
