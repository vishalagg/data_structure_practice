def knapsack(x,w,p):
    pBYw = [p[i]/w[i] for i in range(len(p))]
    spBYw = sorted(range(len(pBYw)),key=lambda z: pBYw[z],reverse=True)
    print(pBYw,spBYw)
    profit = 0
    v = []
    for i in spBYw:
        if w[i]<=x and x>0:
            x -= w[i]
            profit = profit+p[i]
            v.append(w[i])
        else:
            count=i
            break
    if x>0:
        profit += p[count]*(x/w[count])
        v.append(w[i])
    return profit,v
    
w = [int(x) for x in input("Enter weights: ").split()]
p = [int(x) for x in input("Enter profits corressponds to weights: ").split()]
x = int(input("Enter bag's weight holding capacity: "))
profit,v = knapsack(x,w,p)
print("Maximum profit is:",profit," by taking these weights: ",v)