/**Question 4**
Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*
- answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
- answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

**Example 1:**
**Input:** nums1 = [1,2,3], nums2 = [2,4,6]
**Output:** [[1,3],[4,6]]
*/

#include <iostream>
using namespace std;

// Function to calculate sum of elements of array
int getSum(int X[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += X[i];
	return sum;
}

void findSwapValues(int A[], int n, int B[], int m)
{
	// Calculation of sums from both arrays
	int sum1 = getSum(A, n);
	int sum2 = getSum(B, m);

	// Look for val1 and val2, such that
	// sumA - val1 + val2 = sumB - val2 + val1
	int newsum1, newsum2, val1, val2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			newsum1 = sum1 - A[i] + B[j];
			newsum2 = sum2 - B[j] + A[i];
			if (newsum1 == newsum2) {
				val1 = A[i];
				val2 = B[j];
			}
		}
	}

	cout << val1 << " " << val2;
}

// Driver code
int main()
{
	int A[] = { 4, 1, 2, 1, 1, 2 };
	int n = sizeof(A) / sizeof(A[0]);
	int B[] = { 3, 6, 3, 3 };
	int m = sizeof(B) / sizeof(B[0]);

	// Call to function
	findSwapValues(A, n, B, m);
	return 0;
}
