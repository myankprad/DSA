/* 
Question 4
Given a sorted array of distinct integers and a target value, return the index if the
target is found. If not, return the index where it would be if it were inserted in
order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
*/

/* 
    TC:O(logN)
    SC:O(1)
*/



#include <bits/stdc++.h>
using namespace std;

int find_index(int arr[], int n, int K)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == K)
			return i;
		else if (arr[i] > K)
			return i;
	return n;
}

int main()
{
	int arr[] = { 1, 3, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int K = 2;
	cout << find_index(arr, n, K) << endl;
	return 0;
}


