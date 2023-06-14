// Given an array, find a product of all array elements

function multiply(a, n){
    if (n == 0){
        return a[n]
    }
    else{
        return a[n] * multiply(a, n-1)
    }
}