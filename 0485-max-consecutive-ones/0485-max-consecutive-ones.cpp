class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int low=0;
        int res =0;
        int n = nums.size();
        int oneCount = 0;

        for(int high=0; high<n; high++){
            if(nums[high]==0){
                while(low<=high){
                    low++;
                }
            }

            res = max(res,high-low+1);
        }
        return res;
    }
};