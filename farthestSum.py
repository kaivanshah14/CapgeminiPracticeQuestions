#   You are given an array of length “len” ,another item called k and an integer value x. Your job is to find the sum of k farthest items in the array from x.

#   Input Format

#   First line has len, k and x respectively
#   2nd line has the array
 
#   Example
#   Input: 
#   5 3 20
#   21 4 15 17 11
#   Output: 30

#   Explanation
#   4, 15 and 11 are farthest from 20. Thus, their sum will be the answer.

len,k,x=map(int,input().split())
arr=list(map(int,input().split()))
sum,index=0,-1
for i in range(k):
    max=-9999999
    for j in range(len):
        if(arr[j]==-9999999):
            continue 
        temp=abs(x-arr[j])
        if(max<temp):
            max=temp;
            index=j
    sum=sum+arr[index]
    arr[index]=-9999999
print(sum)

# /* Time Complexity: O(n) = O(n) */