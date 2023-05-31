/*
Q1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

var twoSum = function(nums, target) {
    const hashmap = {};
    for (let i = 0; i < nums.length; i++) {
      const diff = target - nums[i];
  
      // If the difference is in the hashmap, return the indices.
      if (diff in hashmap) { // or, hashmap[diff] !== undefined
        return [hashmap[diff], i];
      }
  
      // Otherwise, add the current number to the hashmap.
      hashmap[nums[i]] = i;
    }
  
    return [];
  };

let nums = [1,2,4,3,5];
let target = 8;

console.log(twoSum(nums, target))