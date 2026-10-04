class Solution {
	public:
	bool armstrongNumber(int m) {
		int n=m;
          int ans=0;
          if(n>0){
              while(n!=0){
                  int c=0;
                  c=n%10;
                  ans+=c*c*c;
                  n/=10;
              }
          }else if(n==0){
              return 1;
          }
          return ans==m;
	}
};
