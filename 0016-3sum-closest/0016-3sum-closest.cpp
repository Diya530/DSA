class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());
        int resSum = nums[0]+nums[1]+nums[2];
        int min_diff = INT_MAX;
        int n = nums.size();

        for(int i =0;i<n;i++){
            int j = i+1;
            int k = n-1;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                int diffTotarget = abs(sum-target);

                if(diffTotarget < min_diff){
                    resSum = sum;
                    min_diff = diffTotarget;
                }
                    if(sum==target) return sum;
                    else if(sum<target) j++;
                    else k--;
            }
        }
        return resSum;

    }
};