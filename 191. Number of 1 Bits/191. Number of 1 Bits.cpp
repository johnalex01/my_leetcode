class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        uint32_t p=0;
        while(n!=0){
            p=n&-n;
            n^=p;
            cnt++;
        }
        return cnt;
    }
};