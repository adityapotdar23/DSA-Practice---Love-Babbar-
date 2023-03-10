#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	// Write Your Code here. 
	int c = 0;
	int uc = 0;
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<m;j++) 
		{
			if(arr1[i] == arr2[j]) 
			{
				c++;
			}
		}
	}
	uc = n + m - c;
	pair <int, int> mypair = std::make_pair(c, uc);
	return mypair;
}
