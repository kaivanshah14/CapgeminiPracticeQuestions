def isPrime(n):
    if (n <= 1):
        return False
    for i in range(2,int(n**0.5)+1):
        if (n % i == 0):
            return False
    return True
a=int(input())
b=int(input())
x=0 if a>2 else 2
step=1 if(a%2==0) else 0
for i in range(a+step,b+1,2):
    if(isPrime(i)):
        x=x+i 
print(x)