def pickingNumbers(a):
    a.sort()
    a=list(a)
    maxi=0
    tempa = set(a)
    tempa = list(tempa)
    for i in range(len(tempa)-1):
        maxi = max(maxi,a.count(tempa[i]))
        if abs(tempa[i]-tempa[i+1]) == 1:
            maxi=max(maxi,a.count(tempa[i])+a.count(tempa[i+1]))

    if len(tempa)==1:
        maxi = len(a)
    return maxi

size = int(input())
arr = input()
arr = list(map(int,arr.split(' ')))
res = pickingNumbers(arr)
print(res)
