/*
Given a number n, find the sum of the first natural numbers.
*/

var sum = function(n){
    if(n == 0){
        return 0;
    }
    else{
       return n + sum(n-1)
    }
}

console.log(sum(5))