class Solution {
  public:
    int closestNumber(int n, int m) {
        int q=n/m;
        int n1=q*m;
        int n2=0;
        if(n*m >0){
            q++;
            n2=q*m;
        }else{
            q--;
            n2=q*m;
        }
        int d1=abs(n-n1);
        int d2=abs(n-n2);
        if(d1==d2){
            if(abs(n1)>abs(n2)){
                return n1;
            }else{
                return n2;
            }
        }
        if(d1<d2){
            return n1;
        }else{
            return n2;
        }
        return -1;
        
    }
};