#include <bits/stdc++.h>
void sort012(int *arr, int n) {
  //   Write your code here
  int count[3] = { 0, 0, 0 }; 
  for (int i=0;i<n;i++) 
  {
    if(arr[i]==0) 
    {
      count[arr[i]]++;
    }
    else if(arr[i]==1) 
    {
      count[arr[i]]++;
    }
    else 
    {
      count[arr[i]]++;
    }
  }
  int i=0;
  while(count[0]--) 
  {
    arr[i] = 0;
    i++;
  }
  while(count[1]--) 
  {
    arr[i] = 1;
    i++;
  }
  while(count[2]--) 
  {
    arr[i] = 2;
    i++;
  }

  //  return myarr;
}
