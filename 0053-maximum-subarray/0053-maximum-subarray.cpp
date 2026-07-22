class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int i = 0;

        if(nums.size()==1) return nums[i];

        int bestend = nums[i];
        int ans = nums[i];

        for(int i=1; i<nums.size(); i++){
            
            int o1 = bestend + nums[i];
            int o2 = nums[i];
            bestend = max(o1,o2);
            ans = max(ans,bestend);

        }
        return ans;
    }
};