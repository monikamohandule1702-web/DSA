class Solution {
public:
    int reverse(int x) {
        long long reversenum=0;
        int last;
        int neg=1;

        while(x!=0){
            last=x%10;
            reversenum=(reversenum*10)+last;
              x=x/10;
        }
        if(reversenum>INT_MAX || reversenum<INT_MIN)
        {
            return 0;
         }
        
        return (int)reversenum;
    }
};