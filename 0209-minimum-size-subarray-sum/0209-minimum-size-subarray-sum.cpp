class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int sum = 0;
        int n = nums.size();
        int min_len = INT_MAX;

        for(int high = 0; high<n; high++){
            sum += nums[high];

            while(sum>=target){
                sum = sum - nums[low];
                min_len = min(min_len,high-low+1);
                low++;
            }

        }
        return(min_len==INT_MAX)? 0:min_len;
    }
};