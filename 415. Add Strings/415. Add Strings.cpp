class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1=num1.length()-1,len2=num2.length()-1;
        int addup=0,sum=0;
        int a,b;
        string ans="";
        while(len1>-1||len2>-1||addup>0){
           len1>-1?a=num1[len1]-'0',len1--:a=0;
           len2>-1?b=num2[len2]-'0',len2--:b=0;
            sum=a+b+addup;
            addup=sum/10;
            sum%=10;
            ans=to_string(sum)+ans;
        }
        return ans;
    }
};