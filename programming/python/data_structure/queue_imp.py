from queue import Queue

q = Queue(3)

#add

q.put(1)
q.put(2)
q.put(3)

# check if full

print(q.full())

# remove

q.get()
q.get()
q.get()

# check if empty

print(q.empty())