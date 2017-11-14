'''check whether a no. is prime or not'''
def isprime(n):
    i = n**(1/2)
    j = i%1
    if j==0:            # j will be 0 if n is complete square
        return False
    if n==2:
        return True
    if n!=2 and n%2 == 0:  #All even no. except 2 are not prime
        return False
    for k in range(3,int(i),2):
        if n%k==0:
            return False
    return True

print(isprime(13))