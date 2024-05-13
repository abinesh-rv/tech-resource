import heapq

minheap = []

#add

heapq.heappush(minheap,1)
heapq.heappush(minheap,2)
heapq.heappush(minheap,3)
heapq.heappush(minheap,4)

print(minheap[0])

heapq.heappop(minheap)
heapq.heappop(minheap)
heapq.heappop(minheap)

print(minheap[0])