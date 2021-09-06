n,h,x = map(int,input().split())
a = list(map(int,input().split()))
if(max(a)+x>=h):
    print("yes")
else:
    print("no")