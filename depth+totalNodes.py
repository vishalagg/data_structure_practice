'''cal. depth and total no. of nodes'''
from traversal import BinaryTree

class BinaryTree(BinaryTree):
    
    def depth(self,node):
        if not node:
            return 0
        return max(self.depth(node.left), self.depth(node.right)) + 1
    
    def num_nodes(self,node):
        return len(self.preorder_traverse(node))

level_order = [1,2,3,4,5,6,7,8,9,10]
tree = BinaryTree(level_order)
tree = BinaryTree(level_order)
depth = tree.depth(tree.root)
num_nodes = tree.num_nodes(tree.root)
print(num_nodes,depth)