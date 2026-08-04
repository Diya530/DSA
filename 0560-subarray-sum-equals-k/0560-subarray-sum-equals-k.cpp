class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;

        int sum = 0;
        int res = 0;

        for(int num: nums){

            sum+=num;
            int ques = sum-k;
            res += mp[ques];

            mp[sum]++;
        }
        return res;
    }
};