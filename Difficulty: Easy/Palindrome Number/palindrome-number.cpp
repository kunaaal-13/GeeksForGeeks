class Solution {
  public:
    int rev(int n){
        int ans=0;
        while(n>0){
            int rem=0;
            rem=n%10;
            ans=(ans*10)+rem;
            n/=10;
        }
        return ans;
    }
    bool isPalindrome(int n) {
        if(n<0){
            n=n*(-1);
        }
        int m=n;
        int r=rev(n);
        
        return m==r;
    }
};