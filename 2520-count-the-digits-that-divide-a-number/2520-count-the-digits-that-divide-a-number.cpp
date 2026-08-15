class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int m;
        int val=0;
        while(n>0){
           m=n%10;
           if(num%m==0){
            val++;
           }
           n=n/10;
        }
      return val;
    }
};