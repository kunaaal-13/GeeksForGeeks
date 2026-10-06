class Solution {
  public:
    int a=0;
    int towerOfHanoi(int n, int from, int to, int aux) {
        if(n==0){
            return 1;
        }
        towerOfHanoi(n-1,from,aux,to);
        a++;
        towerOfHanoi(n-1,aux,to,from);
        return a;
        
    }
};