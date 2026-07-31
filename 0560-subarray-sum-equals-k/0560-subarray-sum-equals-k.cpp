class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;

        int res = 0;
        int prefix_sum = 0;

        for(int num:nums){
            prefix_sum += num;

            if(mp.count(prefix_sum - k)){
                res += mp[prefix_sum - k];
            }
            mp[prefix_sum]++;
        }

        return res;
    }
};