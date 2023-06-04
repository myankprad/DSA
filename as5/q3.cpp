/**Question 3**
Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

**Example 1:**
**Input:** nums = [-4,-1,0,3,10]
**Output:** [0,1,9,16,100]
*/

#include <bits/stdc++.h>
class Solution {
public:
    vector<int> sorted_squares(vector<int>& A) {
        vector<int> res(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l])) {
                res[k] = A[r] * A[r--];
            }
            else{
                res[k] = A[l] * A[l++];
            }    
        }
        return res;
    }
};