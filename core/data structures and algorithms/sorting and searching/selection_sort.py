## selection sort => O(n*n)

def selection_sort(array):
    for x in range(len(array)-1):
        temp = x
        for y in range(x+1,len(array)):
            if array[y] < array[temp]:
                temp = y
        array[x],array[temp] = array[temp],array[x]
        print(array)
            

array = [5,10,2,3,1,20,40,19,4,7,6,0]
selection_sort(array)