class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        int original=x;
        while(x<0){
            return false;
        }
        while(x!=0){
            int last=x%10;
            reverse=(reverse*10)+last;
            x=x/10;
       }
       return reverse==original;

    }
};