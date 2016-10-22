class Solution {
public:
    string toHex(int num) {
        string s="";
        int cnt=0;
        if(num==0)
            return "0";
        for(int i=0;i<8;i++){
            int t=num&((1<<4)-1);
            num=num>>4;
            if(t<10)
                s=to_string(t)+s;
            else
                s=(char(t+87))+s;
            
    }
    for(auto it=s.begin();(*it)=='0';it++){
            cnt++;
    }
    s=s.erase(0,cnt);
        
    return s;
    }
};