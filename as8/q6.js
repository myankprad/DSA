// Given two strings s and p, return *an array of all the start indices of* p*'s anagrams in* s. You may return the answer in **any order**.

// An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// **Example 1:**

// **Input:** s = "cbaebabacd", p = "abc"

// **Output:** [0,6]

// **Explanation:**

// The substring with start index = 0 is "cba", which is an anagram of "abc".

// The substring with start index = 6 is "bac", which is an anagram of "abc"


/**
 * @param {string} s
 * @param {string} p
 * @return {number[]}
 */
var findAnagrams = function(s, p) {

    let map = new Map();

    let left = 0;

    let right = 0;

    let count = p.length;

    let Arr = new Array();

    for (let i=0; i<p.length; i++) {

        map.set(p[i], (map.get(p[i]) || 0) + 1);
    }

    while (right < s.length) {

        if (map.get(s[right]) > 0) {

            count--;
        }
            map.set(s[right], (map.get(s[right]) || 0) - 1);

            if (count === 0) Arr.push(left);

            if ((right - left + 1) >= p.length) {

                if (map.get(s[left]) >= 0) {

                    count++;
                }

                map.set(s[left], (map.get(s[left]) || 0) + 1);
           
                left++;
            }

            right++;
        }

        return Arr;

};