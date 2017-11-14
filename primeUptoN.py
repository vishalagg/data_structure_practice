'''print all prime numbers upto n'''
import time

def primeUptoN(n):
    #start = time.time()
    l = [True for i in range(n+1)]
    for i in range(2,n+1):
        if l[i]:
            for j in range(2*i,n+1,i):
                l[j] = False
    for i in range(2,n+1):
        if l[i]:
            print(i)
    
    
n = int(input("Enter value of n upto which prime no. is to print: "))
primeUptoN(n)