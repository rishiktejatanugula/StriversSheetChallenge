bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    if(root1==NULL || root2==NULL){
        return (root1==root2);
    }
    if(root1->data!=root2->data) return false;
    bool lh=identicalTrees(root1->left,root2->left);
    bool rh=identicalTrees(root1->right,root2->right);
    if(lh==NULL ||rh==NULL) return false;
    return true;
}
