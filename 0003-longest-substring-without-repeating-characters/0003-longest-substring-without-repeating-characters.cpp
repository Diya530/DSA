class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int low,high = 0;
        int n = s.size();
        int res_str = 0;

        for(int high=0; high<n; high++){
            mp[s[high]]++;

            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            res_str = max(res_str,high-low+1);
        }
        return res_str;
    }
};