// Given an array of integers arr, the task is to find maximum element of that array using recursion




function findMaxRec(A, n)
{
	
	if (n == 1)
		return A[0];
	
	return Math.max(A[n - 1],
		findMaxRec(A, n - 1));
}


let A = [ 1, 4, 45, 6, -50, 10, 2 ];
let n = A.length;


console.log((findMaxRec(A, n)));




