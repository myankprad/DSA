// Given a number N and a power P, the task is to find the exponent of this
//  number raised to the given power, i.e. N^P.

/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    if (n===0) return 1;
    
    let pow = Math.abs(n);
    
	let result = pow%2===0 ? myPow(x*x,pow/2) : myPow(x*x,(pow-1)/2) * x;
    
    return n < 0 ? 1/result : result;
};