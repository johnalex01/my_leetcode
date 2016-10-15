class Solution {
public:
    bool isAnagram(string s, string t) {
        int ch1[128],ch2[128];
        int len1=s.size(),len2=t.size();
        if(len1!=len2)
            return false;
        memset(ch1,0,sizeof(ch1));
        memset(ch2,0,sizeof(ch2));
        for(int i=0;i<len1;i++){
            ch1[s[i]]++;
            ch2[t[i]]++;
        }
        for(int i=0;i<128;i++){
            if(ch1[i]!=ch2[i])
                return false;
        }
        return true;
            
        
    }
};