class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();
        int m=arr[n-1];
        ans.push_back(m);
        for(int i=n-2;i>=0;i--){
            if(m<=arr[i]){
                ans.push_back(arr[i]);
                m=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};