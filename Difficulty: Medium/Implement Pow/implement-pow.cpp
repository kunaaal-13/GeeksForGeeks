class Solution {
  public:
    double power(double b, int e) {
        double ans=1;
        long long f=e;
        if(e<0){
            e=-1*e;
        }
        while(e>0){
            if(e%2!=0){
                ans*=b;
                e=e-1;
            }else{
                b*=b;
                e/=2;
            }
        }
        if(f<0){
            return 1/ans;
        }
        return ans;
    }
};