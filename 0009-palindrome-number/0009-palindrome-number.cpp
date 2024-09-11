class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0){
                 return false;
                }
        long int num = x,div=0,rev=0;
        while(num!=0){
            div = num%10;
            rev = (rev*10)+div;
            num = num/10;
        }
        if(rev==x){
            return true;
        }
        else{
                 return false;
                }
    }
};