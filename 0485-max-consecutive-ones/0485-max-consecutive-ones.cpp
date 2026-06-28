class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res =0;
        int count = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==1){
                count++;
            }
            else count = 0;
            res = max(res,count);
        }
        return res;
    }
};
//-----ANOTHER SOLUTION--- USING TWO POINTER, SLIDING WINDOW
int res =0;
int low =0;
int n = nums.size();

for(int high=0;high<n;high++){
    if(nums[high]==0){
        while(low<=high){
            low++;
        }
    }
    res = max(res,high-low+1);
}
return res;
