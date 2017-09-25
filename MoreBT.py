'''Checking whether given node is parent node or interior node or leaf in binary tree'''
from binaryTree import BaseBinaryTree

class BinaryTree(BaseBinaryTree):
    def is_parent(self,node):
        if node.left and node.right:
            return True
        return False
    
    def is_interior(self,node):
        if self.is_parent(node) and node is not self.root:
           return True
        return False
    
    def is_leaf(self,node):
        return (not node == self.root) and not self.is_interior(node)
  
level_order = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
tree = BinaryTree(level_order)

root_parent = tree.is_parent(tree.root)
parent = tree.is_parent(tree.root.left)
interior = tree.is_interior(tree.root.left)
root_leaf = tree.is_leaf(tree.root)
leaf = tree.is_leaf(tree.root.left.left)

print(root_parent,parent,interior,root_leaf,leaf,sep=" ,")
