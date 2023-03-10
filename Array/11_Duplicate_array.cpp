#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int n = arr.size();
    int duplicate; 
    for(int current=1;current<=n-1;current++) 
    {
        int count = 0; 
        for(int index=0;index<n;index++)
        {
          if (arr[index] == current) {
            count++;
          }
        }
        if(count>1) 
        {
            duplicate=current;
            break;
        }
    }
    return duplicate;
}

