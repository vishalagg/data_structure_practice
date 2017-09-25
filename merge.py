'''Merging of list in sorted order'''

def merge(ls1,ls2):
    sorted = []
    while ls1 and ls2:
        if ls1[0] < ls2[0]:
            sorted.append(ls1.pop(0))
        else:
            sorted.append(ls2.pop(0))
    sorted += ls1
    sorted += ls2
    return sorted

def merge_sort(ls):
    if len(ls) < 2:
        return ls
    mid = len(ls) // 2
    left =  merge_sort(ls[:mid])
    right = merge_sort(ls[mid:])
    sorted =  merge(left,right)
    return sorted
    

ls1 = [5,2,3,1,11]
ls2 = [4,8,7,12,10]

print(merge(ls1,ls2))

ls = [10,9,12,3,4,1,0]
l = merge_sort(ls)
print(l)