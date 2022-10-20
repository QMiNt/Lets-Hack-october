def search(arr, y):
 
    for i in range(len(arr)):
 
        if arr[i] == y:
            return i
 
    return -1