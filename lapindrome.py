def check_lap(s, start, end1, end):
    h1=""
    h2=""        
    for i in range(0,end1):    #first half of the word
        h1=h1+s[i]
    for i in range(start, end):   #second half of the word
        h2=h2+s[i]
    if(sorted(h1)==sorted(h2)):   #check if the two halfs are anagrams
        return 1
    else:
        return 0

#driver program
t=int(input())   #test cases
while t>0:
    s=input()    
    n=len(s)

    #check if the word has odd number of characters or even

    if n%2==0:       #even
        if check_lap(s,int(n/2),int(n/2),n)==1:
            print("YES")
        else:
            print("NO")

    elif n%2!=0:    #odd
        if check_lap(s,int((n/2)+1),int(n/2),n)==1:
            print("YES")
        else:
            print("NO")
    t=t-1