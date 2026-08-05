class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int,int> mp;

        int res = 0;
        int zero = 0;
        int one = 0;

        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==0) zero++;
            else one++;

            int diff = zero - one;

            if(diff==0){
                res = max(res,i+1);
                continue;
            }
            if(mp.find(diff)==mp.end()){ //it means diff doesnot exist in hashmap
                mp[diff] = i; //so we just store the index in the hashmap
            }
            else{
                res = max(res, i-mp[diff]);
            }
            
        }
        return res;
        
    }
};