'''Find middle node'''
class Node():
    def __init__(self,value=None):
        self.value = value
        self.next = None
        
head = Node("Head Node")
tail = head

for i in range(7):
    s = Node(i)
    tail.next = s
    tail = s
print("List is: ")
t = head.next
while t:
    print(t.value)
    t = t.next
    
#code for finding middle node
fastptr = head.next
slowptr = head.next

while fastptr and fastptr.next and fastptr.next.next:
    fastptr = fastptr.next.next
    slowptr = slowptr.next
    
print("Middle element is: ",slowptr.value)