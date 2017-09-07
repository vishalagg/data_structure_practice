'''
Find a pair in an array whose sum is equal to given number
'''
def find_pair(array,given_sum):
    d = {}
    for x in array:
        other = given_sum - x
        if other in d:
            print("the no. are : " ,x, other)
        else:
            d[x] = True
            
IF __NAME__ == '__MAIN__':
    
            
#array = [0,1,2,3,4,5]
#find_pair(array,5)