n = int(input())
arr = list(map(int, input().rstrip().split()))
res = []
while len(arr)>0:
    mini = min(arr)
    arr = [(i-mini) for i in arr]
    print(len(arr))
    count = arr.count(0)
    for i in range(count):
        arr.remove(0)
