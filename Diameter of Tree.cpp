int dia(TreeNode<int> *root,int &ans){
    if(root==NULL)return 0;
    int lh=dia(root->left,ans);
    int rh=dia(root->right,ans);
    ans=max(ans,lh+rh);
    return 1+max(lh,rh);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	int diameter=0;
    dia(root,diameter);
    return diameter;
}
