// Given a positive integer, N. Find the factorial of N

var factorial = function(n){
    if(n == 0) {
        return 1;
    }
    
    else{
        return( n * factorial(n-1))
    }
}

console.log(factorial(3))