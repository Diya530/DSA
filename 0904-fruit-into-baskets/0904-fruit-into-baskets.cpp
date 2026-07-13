class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int n = fruits.size();
        unordered_map<int,int> mp;
        int res = 0;

        if(n==1) return 1;
        for(int high = 0; high<n; high++){
            mp[fruits[high]]++;

            if(mp.size()<=2){
                res = max(res,high-low+1);
            }
            while(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0){
                    mp.erase(fruits[low]);
                }
                low++;
            }

        }
        return res;
    }
};