 # You’re given a string, the characters in the string may get repeated in the string. You’re supposed to find the positions of the string elements that are not repeating in print them.

 # Note: case doesn’t matter (case insensitive)

 # Example:

 # Input: hghigiklblbmono

 # Output: 7 12 14

 # Explanation
 # k, m and n do not repeat.

alpha=[0]*26 
s=input().lower()
for i in range(len(s)):
    alpha[ord(s[i])-97]+=1 
for i in range(len(s)):
    if(alpha[ord(s[i])-97]==1):
        print(i+1,end=" ")
