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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> tree;
        vector<int> l;
        
        queue<TreeNode*> q;
        
        if(root==NULL)
        	return tree;
        int level=0;
		int currnum=1;
		int nextnum=0;	
        q.push(root);
        while(!q.empty()){
        	TreeNode *f=q.front();
        	q.pop();
        	currnum--;
        	l.push_back(f->val);
        	
        	if(f->left!=NULL){
        		q.push(f->left);
        		nextnum++;
			}
			if(f->right!=NULL){
				q.push(f->right);
				nextnum++;
			}
			if(currnum==0){
				if(level%2!=0)
					reverse(l.begin(),l.end());
				
				level+=1;
				tree.push_back(l);
				l.clear();
				currnum=nextnum;
				nextnum=0;
			}
        	
		}
    }
};