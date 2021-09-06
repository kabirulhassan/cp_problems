for t in range(int(input())):
    n,e,h,a,b,c = map(int,input().split())
    priority,price,k,i = sorted([a,b,c]),0,0,0
    while(i<n):
        if(k==3 and i<=n-1):
            i=-1
            break
        x = price
        if(priority[k]==a):
            if(e>=2):
                e-=2
                price+=a
            else:
                a=-1
        if(priority[k]==b):
            if(h>=3):
                h-=3
                price+=b
            else: 
                b=-1
        if(priority[k]==c):
            if(e>=1 and h>=1):
                e-=1
                h-=1
                price+=c
            else:
                c=-1
        if not(x==price): i+=1
        else : k+=1
    if(i==-1):
        print(i)
    else:
        print(price)