def equalizeArray(arr):
    redarr = list(set(arr))
    maxi = 0
    for i in range(len(redarr)):
        temp = arr.count(redarr[i])
        maxi = max(temp, maxi)

    res = len(arr)-maxi
    return res

size = int(input())
arr = input()
arr = list(map(int,arr.split(' ')))
res = equalizeArray(arr)
print(res)
