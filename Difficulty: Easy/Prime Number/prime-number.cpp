class Solution {
  public:
    bool isPrime(int n) {
        if(n==1) return false;
        int c=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
