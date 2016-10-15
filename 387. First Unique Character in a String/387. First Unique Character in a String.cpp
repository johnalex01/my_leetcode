class Solution {
public:
    int firstUniqChar(string s) {
        int ch[128],len=s.length();
        memset(ch,0,sizeof(ch));
        for(int i=0;i<len;i++)
            ch[s[i]]++;
        
        for(int i=0;i<len;i++)
            if(ch[s[i]]==1)
                return i;
        
        return -1;
    }
};