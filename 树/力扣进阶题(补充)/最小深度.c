/*力扣111题
二叉树的最小深度 简单
给定一个二叉树，找出其最小深度。
最小深度是从根节点到最近叶子节点的最短路径上的节点数量。
说明：叶子节点是指没有子节点的节点。
*/
int min(int m,int n) {
    return m < n ? m : n;
}

int minDepth(struct TreeNode* root) {
    if(root==NULL) return 0;
    if(root->left == NULL) return 1 + minDepth(root->right);
    if(root->right == NULL) return 1 + minDepth(root->left);
    // 如果左右子树都不为空，返回左右子树最小深度 + 1
    return 1 + min(minDepth(root->left), minDepth(root->right));
}