## insertion sort => O(n*n)

def insertion_sort(array):
    for x in range(1,len(array)):
        key = array[x]
        y=x-1
        while y>=0 and key < array[y]:
            array[y+1] = array[y]
            y-=1
        array[y+1] = key
        print(array)

array = [5,10,2,3,1,20,40,19,4,7,6,0]
insertion_sort(array)