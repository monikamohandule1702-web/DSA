class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long a=n;
        if(a<=0){
            return false;
        }
    
        if((a &(a-1))==0){
            return true;
        }
        return false;
    }
};