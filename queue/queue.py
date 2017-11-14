'''Implementing queue'''
class queue():
    
    def __init__(self):
        self.ls = []
        
    def enque(self,value):
        self.ls.insert(0,value)
        
    def deque(self):
        return self.ls.pop()
    
    def size(self):
        return len(self.ls)
    
q = queue()
q.enque(1)
q.enque(2)
q.enque(3)
print(q.deque())