def findShortest(s):
    shortest = []  # initialize ans with empty string  
    cache = set() # create cache to keep record of each encountered character
    so_far = 0 # recrod total instances of chars
    extra = False
    for i in range(len(s)):
        cache.add(s[i])
        so_far += 1
        if len(cache) == 2: # Once you encounter both 1 and 0, add last char to ans, reinitialize cache
            if so_far == 2:
                shortest .append( '0' )# if it's either just 10 ot 01 append 0
            else:
                shortest.append( s[i] )
                extra = True
            so_far = 0
            cache = set()
    for j in '01': # create in lexographical order and add the first missing bit
        if j not in cache:
            shortest .append( j )
            break
        
    if not extra and shortest[-1] == '1':
        for i in range(len(shortest)-1):
            if shortest[i] == '0':
                shortest[i] = '1'
            else:
                shortest[i] = '0' 
                           
    return ''.join(shortest)

for t in range(int(input())):
    s=input()
    print(findShortest(s))