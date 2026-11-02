class Solution {
  public:
    int maxProfit(vector<int> &nums) {
        if(nums.size()==0){
            return 0;
        }
        int low=nums[0];
        int maxp=0;
        for(int i=1;i<nums.size();i++){
            if(low>nums[i]){
                low=nums[i];
            }
            maxp=max(maxp,nums[i]-low);
        }
        return maxp;
        
    }
};
