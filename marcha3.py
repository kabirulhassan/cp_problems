for t in range(int(input())):
    c,a,b= bin(int(input()))[2:],"1","0"
    for i in range(1,len(c)):
        if(c[i] == "1"): a+="0"
        else : a+="1"
        if(i > 0): b+="1"
    print(int(a,2)*int(b,2))