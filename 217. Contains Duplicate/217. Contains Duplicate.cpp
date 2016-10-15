class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> ans;
        for(auto e:nums)
            if(!ans.insert(e).second)
                return true;
        return false;
    }
};