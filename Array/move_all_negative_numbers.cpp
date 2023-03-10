#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here.,
    vector<int> myarr; 
    for(int i=0;i<nums.size();i++) 
    {
        if(nums[i]<0) 
        {
            myarr.insert(myarr.begin(), nums[i]);
        }
        else if(nums[i]>=0) 
        {
            myarr.push_back(nums[i]);
        }
    }
    return myarr;
}
