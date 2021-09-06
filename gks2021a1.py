for t in range(int(input())):
    n,k=map(int,input().split())
    s=input()
    c=0
    for i in range(n//2):
        if(s[i]!=s[n-i-1]):
            c+=1
    print("Case #"+str(t+1)+":",abs(k-c))