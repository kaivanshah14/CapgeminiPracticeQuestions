/* Given two array find the median of these by removing duplicates 

Sample Input 1:
array 1: 3 1 1 2 -> 3 1 2
array 2: 4 3 3 2 1 -> 4 3 2 1

Sample Output 1:
2

Explanation:
array: 1 1 2 2 3 3 4
median: 2

Sample Input 2:
array 1: 2 2 2 2 -> 2
array 2: 4 3 3 5 1 -> 4 3 5 1

Sample Output 2:
3

Explanation:
array: 1 2 3 4 5
median: 3 
*/
int removeDuplicate(int *p,int n)
{
    int temp[n], j=0;
    for(int i=0;i<n-1;i++)
    {
        if (*(p+i) != *(p+i+1))
            temp[j++] = *(p+i);
    }
    temp[j++] = *(p+n-1);
    for (int i=0; i<j; i++)
        *(p+i) = temp[i];
 
    return j;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1[4] = {2,2,2,2}; // 2
    int a2[5] = {4,3,3,5,1}; // 1 2 3 4 5
    int n1 = removeDuplicate(a1,4);
    int n2 = removeDuplicate(a2,5);
    int temp[n1+n2];
    int j=0,k=0;
    for(int i=0;i<n1+n2;i++)
    {
        if(i<n1)
            temp[j++] = a1[i]; 
        else
            temp[j++] = a2[k++]; 
    }
    sort(temp, temp + n1+n2);
    cout << temp[(n1+n2)/2];
    return 0;
}

/* Time Complexity: O(n) + O(n) + O(n) + O(nlogn) = O(nlogn) */