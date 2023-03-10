#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	// int leng = sizeof(arr)/sizeof(arr[0]);
	sort(arr, arr+n); 
	return arr[0] + arr[n-1];
}
