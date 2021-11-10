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
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) cout<<"Perfect Number";
    else cout<<"Not a perfect Number";
    return 0;
}

/* Time Complexity: O(n) + O(n) = O(n) */