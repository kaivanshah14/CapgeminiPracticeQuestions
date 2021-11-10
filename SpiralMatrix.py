# Write the code to traverse a matrix in a spiral format.

# Sample Input 

# Input 

# 5   4

# 1   2   3   4

# 5   6   7   8

# 9   10 11 12

# 13 14 15 16

# 17 18 19 20

# Output 

# 1  2  3  4  8  12  16  20  19  18  17  13  9  5  6  7  11  15  12  14 10

def spiralOrder(arr):
    ans=[]
    while arr:
        ans+=arr.pop(0)
        arr= (list(zip(*arr)))[::-1]
    return ans
arr=[]
n,m=map(int,input().split())
for i in range(n):
    arr.append(list(map(int,input().split())))
print(*spiralOrder(arr))