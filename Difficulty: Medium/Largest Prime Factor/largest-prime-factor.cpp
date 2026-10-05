class Solution {
  public:
    int largestPrimeFactor(int n) {
        int ans=-1;
        int m=n;
        while(m%2==0){
            ans=2;
            m/=2;
        }
        
        for(int i=3;i*i<=m;i=i+2){
            while (m % i == 0) {
                ans = i;
                m /= i;
            }
        }
        if(m>1){
            return m;
        }
        return ans;
    }
};