/*Question 5
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6*/


#include <bits/stdc++.h>
using namespace std;

int maxProduct(int arr[], int n)
{
	if (n < 3)
		return -1;

	int maxProduct = INT_MIN;

	for (int i = 0; i < n - 2; i++)
		for (int j = i + 1; j < n - 1; j++)
			for (int k = j + 1; k < n; k++)
				maxProduct = max(maxProduct,
						arr[i] * arr[j] * arr[k]);

	return maxProduct;
}


int main()
{
	int arr[] = { 10, 12, 4, 6, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int max = max_product(arr, n);

	if (max == -1)
		cout << "No Triplet Exists";
	else
		cout << "Maximum product is " << max;

	return 0;
}