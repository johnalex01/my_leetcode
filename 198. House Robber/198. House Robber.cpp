class Solution {
public
    int rob(vectorint& nums) {
         int len=nums.size();
         if(len==0)
            return 0;
         int premax=0,temp=0,maxnum;
         for(int i=0;ilen;i++){
             maxnum=max(temp+nums[i],premax);
             temp=premax;
             premax=maxnum;
             
         }
         return maxnum;
    }
};