# You’re USA and world war 1 is going on…. You need to decode the message. The following is the script to decode as follows here.

# A : 1 B: 2 C : 3 D: 4 E : 5 so on….
# Each '#' converted to a space
# Decoding is to be performed in -place i.e you cannot use another string.
# All other symbols were to be ignored
 
# Example
# Input: 3 2 4 # 5 1 26 # 0 @ 271
# Output: CBD EAZ 0271

s=input().split(" ")
for i in range(len(s)):
    if(s[i]=="#"):
        s[i]=" "
    elif(not s[i].isnumeric()):
        s[i]=""
    elif(1<=int(s[i])<=26):
        s[i]=chr(64+int(s[i]))
print("".join(s))