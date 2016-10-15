class Solution {
public:
    int longestPalindrome(string s) {
        int len=s.length();
        int ch[128];
        int cnt=0;
        bool have_odd=false;
        memset(ch,0,sizeof(ch));
        for(int i=0;i<len;i++)
            ch[s[i]]++;
        for(int i=0;i<128;i++){
            if(ch[i]%2==0)
                cnt+=ch[i];
            else{
                cnt+=(ch[i]-1);
                have_odd=true;
            }

        }
        return have_odd==true?cnt+1:cnt;
    }
};