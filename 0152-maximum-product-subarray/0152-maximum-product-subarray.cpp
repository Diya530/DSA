class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int i = 0;
        int maxend = nums[i];
        int minend = nums[i];
        int res = nums[i];

        for(int i = 1; i<nums.size(); i++){
            int v1 = nums[i];
            int v2 = maxend * nums[i];
            int v3 = minend * nums[i];

            maxend = max(v1, max(v2,v3));
            minend = min(v1,min(v2,v3));
            res = max(res, max(maxend,minend));

        }
        return res;
    }
};