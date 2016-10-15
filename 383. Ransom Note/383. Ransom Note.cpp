class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ch[128];
        memset(ch,0,sizeof(ch));
        int len1=magazine.length();
        int len2=ransomNote.length();
        for(int i=0;i<len1;i++){
            ch[magazine[i]]++;
        }
        for(int i=0;i<len2;i++){
            //ch[ransomNote[i]]--;
            if(--ch[ransomNote[i]]<0)
            return false;
        }
        return true;
        
    }
};