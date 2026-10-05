class Solution {
  public:
    void printNos(int n) {
        cout<<n<<" ";
        if(n==1) return;
        printNos(n-1);
    }
};