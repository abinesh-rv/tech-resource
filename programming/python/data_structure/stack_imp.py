from queue import LifoQueue

s = LifoQueue(3)

#add

s.put(1)
s.put(2)
s.put(3)

# check if full

print(s.full())

# remove

s.get()
s.get()
s.get()

# check if empty

print(s.empty())