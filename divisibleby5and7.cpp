// Problem Statement –
// Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

// > Sample Input 1:aabbbbeeeeffggg
// > Sample Output 1: a2b4e4f2g3

// > Sample Input 2: abbccccc
// > Sample Output 2:ab2c5

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%5==0 || i%7==0)
            cout<<i<<" ";
    }
    return 0;
}

/* Time Complexity: O(n) = O(n) */