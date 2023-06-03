/**Question 8**
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
*Return the array in the form* [x1,y1,x2,y2,...,xn,yn].

**Example 1:**
Input: nums = [2,5,1,3,4,7], n = 3
Output:[2,3,5,4,1,7]
*/

#include <bits/stdc++.h>
using namespace std;

// function to shuffle an array of size 2n
void shuffleArray(int a[], int n)
{
	// Rotate the element to the left
	for (int i = 0, q = 1, k = n; i < n; i++, k++, q++)
		for (int j = k; j > i + q; j--)
			swap(a[j - 1], a[j]);
}

// Driven Program
int main()
{
	int a[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	int n = sizeof(a) / sizeof(a[0]);

	shuffleArray(a, n / 2);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}
