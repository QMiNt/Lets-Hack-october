def bubbleSort(arr):
    n = len(arr)
 

    for i in range(n):
 
        for j in range(0, n-i-1):
 
            
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
 
 

if __name__ == "_main_":
  arr = [1,4,5,7,9,2]
 
  bubbleSort(arr)
 
  print("Sorted array is:")
  for i in range(len(arr)):
      print("%d" % arr[i], end=" ")