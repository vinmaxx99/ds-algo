# SELECTION SORT
n=int(input())
arr = []

for i in range(n):
    t = int( input())
    arr.append(t)

def selection_sort(arr):
    j = 0
    for j in range( len(arr)):
        iMax, Max = j, arr[j]
        for i, val in enumerate(arr[j:]):
            if Max > val:
                iMax, Max = i+j, val
        arr[j], arr[iMax] = arr[iMax], arr[j]


selection_sort(arr)
print(arr)