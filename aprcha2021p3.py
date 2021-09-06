for t in range(int(input())):
    n,k=map(int,input().split())
    s,strong=input(),"*"*k
    if(s.find(strong,0,n-1) != -1): print("YES")
    else: print("NO")