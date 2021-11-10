s=input()
k=input()
if(k.isupper()):
    s=s.replace(k,chr(ord(k)+32))
else:
    s=s.replace(k,chr(ord(k)-32))
print(s)