# Write a program to find nth largest and nth smallest item in array and print them in the same line.

# Input

# The first line has the following -

# Size of array, value of n
# 2nd line has the array
 

# Output - Nth largest and nth smallest respectively

size,n=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
print(arr[n-1],arr[-n])