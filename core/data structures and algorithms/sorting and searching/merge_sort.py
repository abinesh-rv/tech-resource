## merge sort => O(n*log(n))

def merge_sort(array):
    if len(array) <=1:
        return
    mid = len(array)//2
    left = array[:mid]
    right = array[mid:]
    merge_sort(left)
    merge_sort(right)
    merge_two_list(left,right,array)


def merge_two_list(array1,array2,array):
    len1 = len(array1)
    len2 = len(array2)
    i = j = k = 0
    while i<len1 and j<len2:
        if array1[i] < array2[j]:
            array[k] = array1[i]
            i+=1
        else :
            array[k] = array2[j]
            j+=1
        k+=1
    while i<len1:
        array[k] = array1[i]
        i+=1
        k+=1
    while j<len2:
        array[k] = array2[j]
        j+=1
        k+=1

array = [5,10,2,3,1,20,40,19,4,7,6,0]
merge_sort(array)
print(array) 