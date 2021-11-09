// C++ implementation to find the number closest to n
// and divisible by m

/*Input : n = 13, m = 4
Output : 12

Input : n = -15, m = 6
Output : -18
Both -12 and -18 are closest to -15, but
-18 has the maximum absolute value. */
#include <bits/stdc++.h>

using namespace std;

// function to find the number closest to n
// and divisible by m
int closestNumber(int n, int m)
{
	// find the quotient
	int q = n / m;
	
	// 1st possible closest number
	int n1 = m * q;
	
	// 2nd possible closest number
	int n2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));
	
	// if true, then n1 is the required closest number
	if (abs(n - n1) < abs(n - n2))
		return n1;
	
	// else n2 is the required closest number
	return n2;
}

// Driver program to test above
int main()
{
	int n = 13, m = 4;
	cout << closestNumber(n, m) << endl;
	
	n = -15; m = 6;
	cout << closestNumber(n, m) << endl;
	
	n = 0; m = 8;
	cout << closestNumber(n, m) << endl;
	
	n = 18; m = -7;
	cout << closestNumber(n, m) << endl;
	
	return 0;
}
