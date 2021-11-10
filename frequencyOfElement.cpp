#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
        cin >> arr[i];
    int freq=0;
    vector<int> visited(size,0);
    for(int i=0;i<size;i++)
    {
        if(visited[i]==1)
            continue;

        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;
                visited[j]=1;
            }
        }
        cout << arr[i] << " occurs " << freq << " times" << endl;
        freq = 0;
    }
    return 0;
}