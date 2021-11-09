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