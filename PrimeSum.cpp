// Calculate the sum of all prime numbers between a given range x and y, both inclusive.

// Sample Test Case

// Input: 100 400

// Output: 12827


#include<bits/stdc++.h>
using namespace std;

int isPrime(int);
int c = 0;
vector<int> arr;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
       isPrime(i);
    }
    cout<< endl <<"No. of Prime Numbers "<<c <<endl;
    long int sum = 0;
    for(int i=0;i<arr.size();i++) sum+=arr[i];
    cout << sum;
    return 0;
}

int isPrime(int n)
{
    bool b = true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) 
        {
            b = false;
            break;
        }
    }
    if(b==true){
        cout<<n<<" ";
        c++;
        arr.push_back(n);
    }
    return c;
}