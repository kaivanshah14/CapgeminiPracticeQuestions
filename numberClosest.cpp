// Problem Statement -
// Given two integers n and m. The problem is to find the number closest to n and divisible by m. If there are more than one such number, then output the one having maximum absolute value.
// If n is completely divisible by m, then output n only. Time complexity of O(1) is required.
// Constraints: m != 0

// C++ implementation to find the number closest to n and divisible by m

// Sample Input 1: n = 13, m = 4
// Sample Output 1: 12

// Sample Input 2: n = -15, m = 6
// Sample Output 2: -18
// Both -12 and -18 are closest to -15, but -18 has the maximum absolute value.

// Question courtesy: https://www.geeksforgeeks.org/find-number-closest-n-divisible-m/

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int closestNumber(int n, int m)
{
	int q = n / m;
	int n1 = m * q;
	int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
	
	if (abs(n - n1) < abs(n - n2))
		return n1;
	
	return n2;
}

int main()
{
	int n = 13, m = 4;
	cout << closestNumber(n, m) << endl;
	
	n = -15; m = 6;
	cout << closestNumber(n, m) << endl;
	
	// Test Case 3:
	// n = 0; m = 8;
	// cout << closestNumber(n, m) << endl;
	
	// Test Case 4:
	// n = 18; m = -7;
	// cout << closestNumber(n, m) << endl;
	
	return 0;
}

// Time Complexity O(1)