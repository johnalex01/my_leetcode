class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==1)
            return true;
        bitset<32> n(num);
        if(n.count()!=1)
            return false;
        int i=0;
        while(((num>>i)&1)!=1){
            i++;
        }
        return i%2==0&&i>0&&num>0;
    }
};
