class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res =0;
        for(int i=31;i>=0;i--) { 
        uint32_t bit = n&1;
        res = (res<<1) | bit;
        n>>=1;
        }
        return res;
    }
};