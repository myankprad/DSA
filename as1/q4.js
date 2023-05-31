/*

Q4. You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]


*/

function addingOne(arr){
    let car = 1;
    for(let i=arr.length-1; i>=0; i--){
        let sum = arr[i]+car;
        arr[i] = sum%10;
        car = Math.floor(sum/10);
    }

    if(car> 0){
        arr.unshift(car);
    }
    return arr;
}


console.log(addingOne([9,8,9]));