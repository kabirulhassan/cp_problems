def isSubSequence(str1, str2):
    m,n,i,j = len(str1),len(str2),0,0
    while j < m and i < n:
        if str1[j] == str2[i]:
            j = j+1
        i = i + 1
    return j == m
for t in range(int(input())):
    s,i=input(),0
    while(True):
        binary=bin(i)[2:]
        i+=1
        if not (isSubSequence(binary,s)):
            print(binary)
            break