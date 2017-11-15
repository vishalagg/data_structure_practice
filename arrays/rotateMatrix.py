'''Rotate the given matrix by 90 degree'''

n = int(input("Enter no. of rows"))
print("Enter elements of matrix")
m = [[int(x) for x in input().split()] for i in range(n)]

#Rotated clockwise
rotated = list(zip(*m[::-1]))
print(m,rotated)

#Rotated anti-clockwise
antirotated = list(reversed(list(zip(*m))))
print(m,antirotated)