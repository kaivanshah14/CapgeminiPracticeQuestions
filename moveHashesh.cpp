// Problem Statement –

// You have write a function that accepts, a string which length is “len”, the string has some “#”, in it you have to move all the hashes to the front of the string and return the whole string back and print it.
// char* moveHash(char str[],int n);

// Sample Input 1: Move#Hash#to#Front
// Sample Output 1:###MoveHashtoFront

// Sample Input 2: #HappyCoding#Coding4Life
// Sample Output 2: ##HappyCodingCoding4Life

// Question courtesy: https://prepinsta.com/capgemini/coding-questions/

#include<bits/stdc++.h>
using namespace std;
char *moveHash(char str[],int n)
{
    char str1[n],str2[n];
    int i,j=0,k=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='#')
        str1[j++]=str[i];
        else
        str2[k++]=str[i];
    }
    strcat(str1,str2);
    cout<<str1;
}
int main()
{
    char a[100], len;
    cin>>a;
    len = strlen(a);
    moveHash(a, len);
    return 0;
}

// Time Complexity: O(n)






// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string s;
//     getline(cin,s);
//     int len = s.length();
//     char s1[100],s2[100];
//     int j = 0,k=0;
//     for(int i=0;i<len;i++)
//     {
//         if(s[i]=='#')
//         {
//             s1[j++]==s[i];
//         }
//         else
//         {
//             s2[k++]==s[i];
//         }
//     }
//     strcat(s1,s2);
//     cout<<s1;
//     return 0;
// }