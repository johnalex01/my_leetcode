class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        string h,m;
        for(int i=0;i<12;i++)
            for(int j=0;j<60;j++)
                if(bitset<10>(i<<6|j).count()==num){
                    h=to_string(i);
                    m=to_string(j);
                    ans.push_back(h+":"+(j<10?"0"+m:m));
                }
           return ans;         
    }
};
