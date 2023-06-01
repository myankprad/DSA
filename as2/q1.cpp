/*

Question 1
Given an integer array nums of 2n integers, group these integers into n pairs
(a1, b1), (a2, b2),..., (an, bn) such that the sum of min(ai, bi) for all i is
maximized. Return the maximized sum.

Example 1:
Input: nums = [1,4,3,2]
Output: 4

Explanation: All possible pairings (ignoring the ordering of elements) are:

1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
So the maximum possible sum is 4

*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumPairOfArray(vector<int> nums) {
    sort(nums.begin(), nums.end());

    int sum = 0;

    for (int i = 0; i < nums.size(); i += 2) {
        sum += min(nums[i], nums[i + 1]);
    }

    return sum;
}

int main() { 
    
    cout<<sumPairOfArray({1,4,3,2})<<endl;
    cout<<sumPairOfArray({6,2,6,5,1,2})<<endl;

    return 0; 
}