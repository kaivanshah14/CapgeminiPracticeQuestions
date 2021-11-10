// Gross Salary=Basic Salary +HRA+DA

// You will be given the basic salary you have to implement it according the given rules :

// If basic salary < 1000, then HRA =15% of basic salary and DA=70% of basic salary.
// If basic salary>=1000 , then HRA =20% of basic salary and DA=80% of basic salary
 

// Input:

// Sal:1200

// Output:

// 2400

// Explanation:

// Since sal=1200>=1000

// HRA=1200*20/100=240
// DA=1200*80/100=960
// Gross Salary=1200+240+960=2400
// Thus , output is 2400

#include <iostream>
using namespace std;
int main()
{
    int sal,gross=0;
    cin>>sal;
    if(sal<1000)
    gross=sal+sal*15/100+sal*70/100;
    else
    gross=sal+sal*20/100+sal*80/100;
    cout<<gross;    
}