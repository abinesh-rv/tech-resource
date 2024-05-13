#####################linear search and binary search###############################


####linear search => O(n)

def linear_search(num_list,num_to_find):
    for index,element in enumerate(num_list):
        if element == num_to_find:
            return f"the element {element} is present at position {index}"
    return "the element is not present"

####binary search => O(log(n))

def binary_search(num_list,num_to_find):
    low=0
    high=len(num_list)-1
    mid=0
    while low <=high:
        mid=(high+low)//2
        if num_list[mid] == num_to_find:
             return f"the element {num_to_find} is present at position {mid}"
        elif num_list[mid] < num_to_find:
            low = mid+1
        else:
            high = mid-1
    else:
         return "the element is not present"

array = [2,3,4,5,6,7,8,9,10]
no_to_find = 10

print(linear_search(array,no_to_find))
print(binary_search(array,no_to_find))