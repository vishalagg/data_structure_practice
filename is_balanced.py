'''checking tne tree is balanced or not'''
from binaryTree import BaseBinaryTree
class BinaryTree(BaseBinaryTree):
    
    def depth(self,node):
        if not node:
            return 0
        return max(self.depth(node.left), self.depth(node.right)) + 1
    
    def is_balanced(self, node):
        if not node:
            return True
        
        left_height = self.depth(node.left)
        right_height = self.depth(node.right)
        
        if (abs(right_height - left_height) <= 1
               and self.is_balanced(node.left)
               and self.is_balanced(node.right)):
            return True
        return False
    
level_order = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
tree = BinaryTree(level_order)
balanced = tree.is_balanced(tree.root)
print(balanced)