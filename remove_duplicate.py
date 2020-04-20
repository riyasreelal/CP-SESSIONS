# Driver code 
t=int(input())  #test cases
while t>0:
    s= input()  #accept the string
    dup=""
    for i in s:   
        if i not in dup:  #to avoid repeating characters
            dup+=i
    print(dup) 
    t=t-1