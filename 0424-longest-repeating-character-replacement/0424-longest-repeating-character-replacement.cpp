class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int res = 0; //max Window(length of longest substring)
        int maxFreq = 0; //max frequency in the array
        int n = s.size();
        int freq[26] = {0}; 
        
        for(int high=0; high<n; high++){
            freq[s[high]-'A']++;
            maxFreq = max(maxFreq, freq[s[high]-'A']);

            int windowLength = high-low+1;
            if(windowLength-maxFreq >k){
                freq[s[low]-'A']--;
                low++;
            }

            windowLength = high-low+1;
            res = max(res,windowLength);
        }
        return res;
    }
};