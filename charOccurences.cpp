// /*
// * Problem Statement –
// Capgemini in its online written test have a coding question, wherein the students are given a string with multiple characters that are repeated consecutively. You’re supposed to reduce the size of this string using mathematical logic given as in the example below :

// > Input:
// > aabbbbeeeeffggg
// > Output:
// > a2b4e4f2g3

// > Input:
// > abbccccc
// > Output:
// > ab2c5
// */
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int arr[26];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < s.size(); i++)
    {
            arr[s[i]-'a']++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (arr[s[i]-'a']!=0)
        {
            cout << s[i] << arr[s[i]-'a'] << " ";
            arr[s[i]-'a']=0;
        }
    }
    return 0;
}