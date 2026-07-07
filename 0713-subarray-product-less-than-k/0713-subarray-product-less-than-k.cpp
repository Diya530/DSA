class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low=0;
        int count=0;
        int n = nums.size();
        int prod=1;

        if(k<=1) return 0;
        for(int high=0; high<n; high++){
            prod = prod*nums[high];

            while(prod>=k){
                prod = prod/nums[low];
                low++;
            }
            count = count+(high-low+1);
        }
        return count;
    }
};