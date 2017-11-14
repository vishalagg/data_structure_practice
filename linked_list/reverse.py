'''Reverse a link list'''
class Node():
    def __init__(self,value=None):
        self.value = value
        self.next = None
        
head = Node("Head Node")
tail = head

for i in range(6):
    s = Node(i)
    tail.next = s
    tail = s
print("Original List: ")
t = head.next
while t:
    print(t.value)
    t = t.next
    
# code for reverse:    
prev = None
curr = head.next
while curr:
    nextp = curr.next
    curr.next = prev
    prev = curr
    curr = nextp
    
temp = head
head = tail
tail = temp
print("Reversed List: ")
t = head
while t:
    print(t.value)
    t = t.next    
