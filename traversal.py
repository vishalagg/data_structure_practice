'''preorder, postorder, and inorder traversal'''
from binaryTree import BaseBinaryTree

class BinaryTree(BaseBinaryTree):
    def preorder_traverse(self, node):
        if not node:
            return []
        return (
            [node.value] +
            self.preorder_traverse(node.left) +
            self.preorder_traverse(node.right)
        )
    
    def inorder_traverse(self, node):
        if not node:
            return []
        return (
            self.preorder_traverse(node.left) +
            [node.value] +
            self.preorder_traverse(node.right)
        )
    
    def postorder_traverse(self, node):
        if not node:
            return []
        return (
            self.postorder_traverse(node.left) +
            self.postorder_traverse(node.right) +
            [node.value]
        )
    
level_order = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

tree = BinaryTree(level_order)
preorder = tree.preorder_traverse(tree.root)
inorder = tree.inorder_traverse(tree.root)
postorder = tree.postorder_traverse(tree.root)
print(preorder,postorder,inorder,sep=" \n")