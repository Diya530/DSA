class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        
        int maxend = nums[0], MaxSum = nums[0];
        int minend = nums[0], MinSum = nums[0];

        for(int i=1; i<n; i++){
            
            maxend = max(maxend+nums[i], nums[i]);
            MaxSum = max(MaxSum, maxend);

            minend = min(minend+nums[i], nums[i]);
            MinSum = min(MinSum, minend);

        }

        return max(abs(MaxSum), abs(MinSum));
        
    }
};