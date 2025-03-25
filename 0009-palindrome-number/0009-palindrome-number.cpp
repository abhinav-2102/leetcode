class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long long revNum=0;
        long long rem=0;
        if(x<0){
            return false;
        }
        while(x>0){
            rem=x%10;
            x=x/10;
            revNum=revNum*10+rem;
        }
        if(revNum==y){
            return true;
        }
        return false;
    }
};