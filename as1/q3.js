/*

Q3. Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5

Output: 2

*/

function findTheTarget(arr, target){
    let i=0; 
    let j = arr.length-1;

    while(i<=j){
        let mid = Math.floor((j+i)/2);

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            j = mid-1;
        }else{
            i = mid+1;
        }
    }

    return i;
}


console.log(findTheTarget([1,3,4,6], ));