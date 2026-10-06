class Solution {
  public:
    int josephus(int n, int k) {
        int a=0;
        for(int i=2;i<=n;i++){
            a=(a+k)%i;
        }
        return a+1;
    }
};