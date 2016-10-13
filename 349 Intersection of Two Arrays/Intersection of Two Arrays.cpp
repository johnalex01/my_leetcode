class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1(nums1.begin(),nums1.end());
        set<int> ans;
        int len=nums2.size();
        for(int i=0;i<len;i++){
            auto it = n1.find(nums2[i]);
            if(it!=n1.end())
                ans.emplace(*it);
        }
        vector<int> ans1(ans.begin(),ans.end());
        return ans1;
    }
};