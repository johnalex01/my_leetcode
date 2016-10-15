class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> n1(nums1.begin(),nums1.end());
        multiset<int> ans;
        int len=nums2.size();
        for(int i=0;i<len;i++){
            auto it = n1.find(nums2[i]);
            if(it!=n1.end()){
                n1.erase(it);
                ans.emplace(*it);
            }
        }
        vector<int> ans1(ans.begin(),ans.end());
        return ans1;
    }
};