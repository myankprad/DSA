/**Question 2**
Given a string num which represents an integer, return true *if* num *is a **strobogrammatic number***.
A **strobogrammatic number** is a number that looks the same when rotated 180 degrees (looked at upside down).
Example 1:
Input:num = "69"
Output:true
*/


#include <bits/stdc++.h>
using namespace std;

vector<string> numdef(int n, int length)
{
	vector<string> result;
	if (n == 0)
		return result;
	if (n == 1) {
		result.push_back("1");
		result.push_back("0");
		result.push_back("8");
		return result;
	}

	vector<string> middles = numdef(n - 2, length);

	for (string middle : middles) {
		if (n != length)
			result.push_back("0" + middle + "0");

		result.push_back("8" + middle + "8");
		result.push_back("1" + middle + "1");
		result.push_back("9" + middle + "6");
		result.push_back("6" + middle + "9");
	}
	return result;
}

vector<string> strobogrammatic_num(int n)
{
	vector<string> result = numdef(n, n);
	return result;
}

int main()
{
	
	for (string num : (strobogrammatic_num(3)))
		cout << num << " ";
}

