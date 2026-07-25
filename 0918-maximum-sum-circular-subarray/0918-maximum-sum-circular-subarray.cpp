class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int maxend = nums[0] , MaxSum = nums[0];
        int minend = nums[0] ,  MinSum = nums[0];
        int NormalMax = nums[0],  CircularMax = nums[0];
        int sum = nums[0];

        for(int i = 1; i<n; i++){

            maxend = max(maxend+nums[i], nums[i]);
            minend = min(minend+nums[i], nums[i]);

            MaxSum = max(MaxSum, maxend);
            MinSum = min(MinSum, minend);

            sum += nums[i];
        }
        NormalMax = MaxSum;
        CircularMax = sum - MinSum;

        if(NormalMax < 0) return NormalMax;

        return max(NormalMax, CircularMax);
    }
};