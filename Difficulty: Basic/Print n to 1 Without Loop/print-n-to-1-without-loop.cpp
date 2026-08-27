class Solution {
  public:
    void likh(int n){
        if(n==0) return;
        cout<<n<<" ";
        likh(n-1);
    }
    void printNos(int n) {
        likh(n);
        
    }
};