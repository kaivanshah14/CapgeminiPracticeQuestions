// Write a function to solve the following equation a3 + a2b + 2a2b + 2ab2 + ab2 + b3.   Write a program to accept three values in order of a, b and c and get the result of the above equation.

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum;
    sum=(a+b)*(a+b)*(a+b);
    cout<<sum;
}