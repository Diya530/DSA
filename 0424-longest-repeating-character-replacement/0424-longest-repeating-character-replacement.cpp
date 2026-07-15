class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int res_str = 0;
        int n = s.size();
        int max_freq = 0;
        int freq[26] = {0};

        for(int high = 0; high<n; high++){
            freq[s[high]-'A']++;
            max_freq = max(max_freq , freq[s[high]-'A']);
            int window_len = high-low+1;

            if(window_len - max_freq > k){
                freq[s[low]-'A']--;
                low++;
            }

            window_len = high-low+1;
            res_str = max(res_str, window_len);
        }
        return res_str;
    }
};