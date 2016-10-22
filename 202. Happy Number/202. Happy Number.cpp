class Solution {
public:
    bool isHappy(int n) {
        int sum;
        int cnt=0;
        while(1){
            sum=0;
            while(n!=0){
                sum+=pow(n%10,2);
                n=n/10;
            }
            if(sum==1){
                return true;
            }
            n=sum;
            cnt++;
            if(cnt>5)
                return false;
        }
    }
};