class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int bestend = nums[0];
        int res = nums[0];

        for(int i = 1; i<n; i++){

            bestend = max(bestend + nums[i], nums[i]);

            res = max(bestend, res);
        }
        return res;
    }
};