// A function is there which tells how many dealerships there are and the total number of cars in each dealership.


// Your job is to calculate how many tyres would be there in each dealership.


// Input

// 3 

// 4 2

// 4 0

// 1 2

// Output

// 20

// 16

// 8

#include <iostream>
using namespace std;
int main()
{
    int t,cars,bikes;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>cars>>bikes;
        cout<<cars*4+bikes*2;
        cout<<"\n";
    }
}