#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n; 
    cin>>n;
    int a[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k; 
    cin>>k;
    for(int i=0;i<k;i++) 
    {
        int f = a[0];
        for(int j=0;j<n-1;j++) 
        {
            a[j] = a[j+1]; 
        }
        a[n-1] = f;
    }
    for(int i=0;i<n;i++) 
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
