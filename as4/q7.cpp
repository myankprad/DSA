/**Question 7**
You are given an m x n matrix M initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.
Count and return *the number of maximum integers in the matrix after performing all the operations*

Example 1:
Input: m = 3, n = 3, ops = [[2,2],[3,3]]
Output: 4
*/

#include <bits/stdc++.h>

class Solution 
{
public:
    // int maxCount(int m, int n, vector<vector<int>>& ops)
    int maxCount(int row, int colum, vector<vector<int>> &iOperations) 
    {
        for(int i = 0; i < iOperations.size(); i++)
        {
            row = min(row, i_iOperations[i].front());
            colum = min(colum, i_iOperations[i].back());
        }
        
        return row * colum;
    }
};