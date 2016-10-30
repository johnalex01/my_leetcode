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
    int _sum(TreeNode* root,int curr_sum,int sum){
        if(root==NULL)
            return 0;
        int cnt=0;
        if(curr_sum+root->val==sum)
            cnt++;
        curr_sum+=root->val;
        cnt+=_sum(root->left,curr_sum,sum);
        cnt+=_sum(root->right,curr_sum,sum);
        return cnt;
            
    }
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return 0;
        return pathSum(root->left,sum)+pathSum(root->right,sum)+_sum(root,0,sum);
    }
};