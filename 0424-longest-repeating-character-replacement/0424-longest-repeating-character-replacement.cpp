class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0;
        int res=0; //max Window(length of longest substring)
        int maxFreq =0; //max frequency in the hash map
        int n = s.size();
        unordered_map<char,int> mp;
        
        for(int high=0; high<n; high++){
            mp[s[high]]++;
            maxFreq = max(maxFreq,mp[s[high]]);

            int windowLength = high-low+1;
            if(windowLength-maxFreq >k){
                mp[s[low]]--;
                low++;
            }
            
            windowLength = high-low+1;
            res = max(res,windowLength);
        }
        return res;
    }
};