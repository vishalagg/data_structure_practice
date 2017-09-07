'''
find an element in array that occurs more than n/2 times,here n=size of array
'''
def find_element(array):
    voter = array[0]
    vote = 0
    for each in array:
        if each == voter:
            vote += 1
        else:
            vote -= 1
            if vote < 0:
                voter = each
                vote = 1
    if vote > 0:
        return is_really_max_occuring(array,voter)
    else:
        print("No element is occuring more than by n/2")
        return None

def is_really_max_occuring(array,voter):
    count = 0
    for each in array:
        if each == voter:
            count += 1
    if count > len(array)/2:
        print("element is: ",voter)
        return voter
    return None
        
#find_element([1,3,1,1,3,5,1,4,1,1,1,1,9,8])