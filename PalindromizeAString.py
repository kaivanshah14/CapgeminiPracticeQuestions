# You’re given a string, you’ve to print additional characters needed to make that string a palindrome.

# A Palindrome is a sequence of characters that has the property of reading the same in either direction.

# Sample Test Cases
# Sample Input 1: abede
# Sample Output 1: ba

def ispalindrome(s):
    return s==s[::-1]
 
def solve(s):
    if(ispalindrome(s)):
        return None
    for i in range(len(s)):
        x=s[:i][::-1]
        if(ispalindrome(s+x)):
            return x 

s=input()
print(solve(s))