/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        cal(root,sum);
        return sum;

    }
    
    void cal(TreeNode* root,bool is_left){
        if(!root)
            return ;
        if(!root->left&&!root->right&&is_left)
            sum+=root->val;
        cal(root->left,true);
        cal(root->right,false);

    }
};