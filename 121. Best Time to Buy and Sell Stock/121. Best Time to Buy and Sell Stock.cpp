class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>  d;
        int max=0,sum=0;
        int len=prices.size();
        for(int i=1;i<len;i++){
            sum+=(prices[i]-prices[i-1]);
            if(sum<0)
                sum=0;
            else if(sum>max)
                max=sum;
        }
        return max;
    }
};