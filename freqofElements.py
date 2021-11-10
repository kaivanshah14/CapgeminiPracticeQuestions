n=int(input())
arr=list(map(int,input().split()))
dup=[]
for i in arr:
    if(i not in dup):
        dup.append(i)
        print("{} occurs {} times".format(i,arr.count(i)))