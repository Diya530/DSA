class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;

        int sum = 0;
        int res = 0;

        for(int num: nums){

            sum+=num;
            auto it = mp.find(sum - k);
            if (it != mp.end()) {
                  res += it->second; // it->second is the value (the frequency)
            }

            mp[sum]++;
        }
        return res;
    }
};