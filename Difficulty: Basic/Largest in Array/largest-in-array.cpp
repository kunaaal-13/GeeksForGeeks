class Solution {
  public:
    int largest(vector<int> &arr) {
        int m=arr[0];
        for(int i=0;i<arr.size();i++){
            if(m<arr[i]){
                m=arr[i];
            }
        }
        return m;
        
    }
};
