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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    	vector<vector<int>> v;
		vector<int> l; 
        queue<TreeNode*> q;
		int curnum=1;
		int nextnum=0;
		if(root==NULL)
		return v;
		

		q.push(root);

		while(!q.empty()){
			TreeNode* t=q.front();
			q.pop();
			curnum--;
			l.push_back(t->val);
			if(t->left!=NULL){
				q.push(t->left);
				nextnum++;
			}
			if(t->right!=NULL){
				q.push(t->right);
				nextnum++;
			}
			if(curnum==0){
				curnum=nextnum;
				nextnum=0;
				v.push_back(l);
				l.clear();
			} 
			
		}
		
		reverse(v.begin(),v.end());
		return v;
		
    }
};
