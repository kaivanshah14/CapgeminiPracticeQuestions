// You’re given a function that accepts the following, a string1, its length and a character c. Your job is to replace all the occurrences of character c in string1 and capitalize it or decapitalize it based on the character c.

// void changeCharacter(char str[], char chr, int len)
 
// Example
// Sample Test Case : 1
// Input: 
// hello world
// l
// Output:
// heLLo worLd

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;
void changeCase(string &str, char &c)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==c)
        {
            if(str[i]>='a' && str[i]<='z')
                str[i] = str[i] - 32;
            else if(str[i]>='A' && str[i]<='Z')
                str[i] = str[i] + 32;
        }
    }
}
int main()
{
    string s1;
    getline(cin,s1);
    char c;
    cin >> c;
    changeCase(s1,c);
    cout << s1;
    return 0;
}

/* Time Complexity: O(n) = O(n) */