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
	void binary(vector<string>& v,TreeNode* r ,string t){
		if(r->left==NULL&&r->right==NULL){
		
			v.push_back(t);
			return ;
		}
		
		if(r->left)  binary(v,r->left,t+"->"+to_string(r->left->val));
		if(r->right)  binary(v,r->right,t+"->"+to_string(r->right->val));
	}
	
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> path;
        if(root==NULL)
        	return path;
        	
        binary(path,root,to_string(root->val));
        
        return path;
    }
};