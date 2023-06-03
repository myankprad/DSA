/*Question 3**
Given a 2D integer array matrix, return *the **transpose** of* matrix.
The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
**Example 1:**
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
*/


#include <bits/stdc++.h>
using namespace std;
#define N 4

// This function stores transpose
// of A[][] in B[][]
void transpose(int A[][N], int B[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			B[i][j] = A[j][i];
}

// Driver code
int main()
{
	int A[N][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	// Note dimensions of B[][]
	int B[N][N], i, j;

	// Function call
	transpose(A, B);

	cout << "Result matrix is \n";
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			cout << " " << B[i][j];

		cout << "\n";
	}
	return 0;
}

