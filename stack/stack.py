'''Implementing stack'''
class stack():
    
    def __init__(self):
        self.ls = []
        
    def push(self,value):
        self.ls.insert(0,value)
        
    def pop(self):
        return self.ls.pop(0)
        
    def peek(self):
        return self.ls[0]
        
    def isEmpty(self):
        return self.ls == []
    
    def size(self):
        return len(self.ls)
    
x = stack()
x.push(1)
x.push(2)
print(x.pop())