import heapq

maxheap = []

#add

heapq.heappush(maxheap,-1)
heapq.heappush(maxheap,-2)
heapq.heappush(maxheap,-3)
heapq.heappush(maxheap,-4)

print(-1 * maxheap[0])

heapq.heappop(maxheap)
heapq.heappop(maxheap)
heapq.heappop(maxheap)

print(-1 * maxheap[0])