class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int res = INT_MAX;
        int sum  = 0;

        for(int high=0; high<n;high++){

            sum += nums[high];

            while(sum>=target){
                sum = sum - nums[low];
                res = min(res,high-low+1);
                low++;
            }
        }
        return(res==INT_MAX)? 0:res;
    }
};