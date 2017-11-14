'''Add 1 to a number given i the form of liinked list'''
def reverseList(h):
    prev = None
    curr = h
    #print(curr.value)
    while curr:
        nextp = curr.next
        curr.next = prev
        prev = curr
        curr = nextp
        #print(prev.value)
    global tail,head
    temp = head
    head = tail
    tail = temp
    
class Node():
    def __init__(self,value=None):
        self.value = value
        self.next = None
        
head = Node(9)
tail = head

for i in range(2):
    s = Node(9)
    tail.next = s
    tail = s
print("Number is: ")
t = head
while t:
    print(t.value,end='')
    t = t.next
print()

#Reversing the list
reverseList(head)
#print(head.value,tail.value)

#adding 1:
c = 1
s = 0
t = head
while t:
    s = c + t.value
    c = 1 if s==10 else 0
    s = s%10
    t.value = s
    tail = t
    t = t.next
if c is 1:
    tail.next = Node(c)
    tail = tail.next

#print(head.value,tail.value)

reverseList(head)
#print(head.value,tail.value)
t = head
print("After adding 1:")
while t:
    print(t.value,end='')
    t = t.next
print()