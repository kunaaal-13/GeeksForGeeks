class Solution {
  public:
    void r(vector<int>& arr, int st,int end){
        while(st<end){
            swap(arr[st],arr[end]);
            st++;
            end--;
        }
        // return;
    }
    void rotateArr(vector<int>& arr, int d) {
        
        int n=arr.size();
        if(d>=n){
            d=d%n;
        }
        r(arr,0,n-1);
        r(arr,0,n-1-d);
        r(arr,n-d,n-1);
        
    }
};