## bubble sort => O(n*n)

def bubble_sort(array):
   for x in range(len(array)-1):
      for y in range(len(array)-1-x):
         if array[y] > array[y+1] and y != len(array):
            array[y],array[y+1] = array[y+1],array[y]
      print(array)

array = [5,10,2,3,1,20,40,19,4,7,6,0]
bubble_sort(array)