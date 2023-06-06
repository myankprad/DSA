/**Question 6**
An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.
Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.

**Example 1:**
Input:changed = [1,3,4,2,6,8]
Output: [1,3,4]
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> findOriginal(vector<int>& arr)
{

	// Stores the numbers and
	// their frequency
	map<int, int> numFreq;

	// Add number with their frequencies
	// in the hashmap
	for (int i = 0; i < arr.size(); i++) {
		numFreq[arr[i]]++;
	}

	// Sort the array
	sort(arr.begin(), arr.end());

	// Initialize an arraylist
	vector<int> res;

	for (int i = 0; i < arr.size(); i++) {

		// Get the frequency of the number
		int freq = numFreq[arr[i]];
		if (freq > 0) {

			// Element is of original array
			res.push_back(arr[i]);

			// Decrement the frequency of
			// the number
			numFreq[arr[i]]--;

			int twice = 2 * arr[i];

			// Decrement the frequency of
			// the number having double value
			numFreq[twice]--;
		}
	}

	return res;
}


int main()
{

	vector<int> arr = { 4, 1, 2, 2, 2, 4, 8, 4 };
	vector<int> res = findOriginal(arr);

	// Print the result list
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}

	return 0;
}

