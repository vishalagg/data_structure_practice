'''Find Next greater number with same set of digits as in given number'''

n = list(input("Enter the number: "))
l = len(n)

for i in range(l-2,0,-1):
    if n[i] < n[i+1]:
        break
        
#print("i is",i)
if i==1:
    print("No greater no. is possible")
        
else:
    #find no. just greater than n[i] in the right of it
    for j in range(l-1,0,-1):
        if n[i] < n[j]:
            temp = n[i]
            n[i] = n[j]
            n[j] = temp
            break
            
    n[i+1:] = sorted(n[i+1:])
    
    n = "".join(n)
    print(n)