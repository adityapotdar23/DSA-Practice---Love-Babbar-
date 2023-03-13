#include <bits/stdc++.h> 
#include<algorithm> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size(); 
    sort(intervals.begin(), intervals.end()); 
    vector<vector<int>> res; 

    for(int i=0;i<n;i++)
    {
        int currentS = intervals[i][0]; 
        int currentE = intervals[i][1]; 

        if(res.size()==0 || currentS>res[res.size()-1][1]) 
        {
            res.push_back(intervals[i]);
        }
        else 
        {
            res[res.size()-1][1] = max(res[res.size()-1][1], currentE);
        }
    }
    return res;
}
