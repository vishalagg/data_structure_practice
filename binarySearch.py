'''Binary Search'''
l = list(map(int,input("Enter array(sorted): ").split()))
k = int(input("enter the element to be search: "))
s = 0
e = len(l)
flag = 0
while s<=e:
    mid = (s + e)//2
    if k == l[mid]:
        print("Index of ",k,"is ",mid)
        flag = 1
        break
    elif k < l[mid]:
        e = mid-1
    else:
        s = mid+1
        
if flag == 0:
    print("No Index found!!!")