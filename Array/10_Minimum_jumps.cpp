#include <bits/stdc++.h> 
int minimizeIt(vector<int> A, int K)
{
	// Write your code here.
	sort(A.begin(), A.end());
	int n = A.size();
	int ans = A[n-1] - A[0];
	int minimum = A[0] + K;
	int maximum = A[n-1] - K; 
	int current_minimum; 
	int current_maximum;
	// cout<<A[-1]<<endl;
	for(int i=0;i<n-1;i++) 
	{
		current_minimum = min(minimum, A[i+1]-K);
		current_maximum = max(maximum, A[i] + K);
		if(current_minimum>0) 
		{
			ans = min(ans, current_maximum-current_minimum);
		}
	}
	return ans;
}
