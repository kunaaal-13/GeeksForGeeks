class Solution {
  public:
    vector<vector<int>> ans;
    void prin(vector<int>& nums,vector<int>& temp,int i){
        if(i==nums.size()){
            //ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        ans.push_back(temp);
        prin(nums, temp,i+1);
        temp.pop_back();
        
        if(temp.empty()){
            prin(nums,temp,i+1);
        }
        
    }
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        ans.clear();
        vector<int> temp;
        prin(arr,temp,0);
        return ans;
        
    }
};