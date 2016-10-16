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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> tree;
		vector<int> l;
		
		queue<TreeNode*>  q;
		
		if(root==NULL)
			return tree;
		
		int currnum=1;
		int nextnum=0;
		
		q.push(root);
		while(!q.empty()){
			TreeNode *f=q.front();
			q.pop();
			currnum--;
			l.push_back(f->val);
			if(f->left){
				q.push(f->left);
				nextnum++;
			}
			if(f->right){
				q.push(f->right);
				nextnum++;
			}
			if(currnum==0){
				tree.push_back(l);
				currnum=nextnum;
				nextnum=0;
				l.clear();
			}
		}
		return tree;
    }
};