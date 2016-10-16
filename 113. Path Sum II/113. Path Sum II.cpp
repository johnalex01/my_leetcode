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

	void binary(vector<vector<int>>& v,TreeNode* r ,vector<int> t,int num){
		if(r->left==NULL&&r->right==NULL){
			int sum=0;
			for(auto e=t.begin();e!=t.end();e++)
				sum+=*e;
			//sum=accumlate(t.begin(),t.end());
			if(sum==num){
			v.push_back(t);
		}
			return ;
			
		}
		vector<int> t1=t;
		vector<int> t2=t;
		if(r->left)  {
			t1.push_back(r->left->val);
			binary(v,r->left,t1,num);
		}
		if(r->right) {
			t2.push_back(r->right->val);
			binary(v,r->right,t2,num);
		} 
	}
	
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> path;
        vector<int> T;
        if(root==NULL)
        	return path;
        T.push_back(root->val);
        binary(path,root,T,sum);
        
        return path;
    }
};