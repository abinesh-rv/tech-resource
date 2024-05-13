##shell_sort => O(n*(log n)*(log(n))

def shell_sort(array):
    size = len(array)
    gap = size // 2
    while gap > 0:
        for i in range(gap,size):
            anchor = array[i]
            j=i
            while j>=gap and array[j-gap] > anchor:
                array[j] = array[j-gap]
                j -= gap
            array[j] = anchor
        gap = gap // 2
            

array = [5,10,2,3,1,20,40,19,4,7,6,0]
shell_sort(array)
print(array)