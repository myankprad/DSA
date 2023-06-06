/**Question 5**
The **product sum** of two equal-length arrays a and b is equal to the sum of a[i] * b[i] for all 0 <= i < a.length (**0-indexed**).
- For example, if a = [1,2,3,4] and b = [5,2,3,1], the **product sum** would be 1*5 + 2*2 + 3*3 + 4*1 = 22.
Given two arrays nums1 and nums2 of length n, return *the **minimum product sum** if you are allowed to **rearrange** the **order** of the elements in* nums1.

**Example 1:**
Input:nums1 = [5,3,4,2], nums2 = [4,2,2,5]
Output: 40
*/


#include <bits/stdc++.h>
using namespace std;


long long int minValue(int A[], int B[], int n)
{
	
	sort(A, A + n);
	sort(B, B + n);

	
	long long int result = 0;
	for (int i = 0; i < n; i++)
		result += (A[i] * B[n - i - 1]);

	return result;
}
