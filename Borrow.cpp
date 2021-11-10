// You have two numbers number1 and number2, your job is to check the number of borrow operations needed for subtraction of number1 from number2. If the subtraction is not possible then return the string not possible.

//   Example 1 754, 658 
// Answer : 2   
// Example 2 654, 666 
// Answer: Not possible

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count1=0,flag=0;
    int num1, num2;
    cin >> num1 >> num2;
    if(num1<num2) cout << "Not possible";
    else 
    {
        int n1,n2;
        while(num1!=0 && num2!=0)
        {
            // n1 = 0;
            n2 = num2%10;
            if(flag==1) n1 = num1%10-1;
            else n1 = num1%10;
            if(n1<n2)
            {
                count1 = count1+1;
                flag = 1;
            }
            else flag = 0;
                num1 = num1/10;
                num2 = num2/10;
        }
        cout << count1 << endl;
    }
    return 0;
}

/* Time Complexity: O(n) = O(n) */