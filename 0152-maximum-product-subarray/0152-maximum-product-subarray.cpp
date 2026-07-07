class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int product=1;
        int n = nums.size();
        int result=0;
        int i =0;
        if(n==1) return nums[i];
        for(int i=0;i<n;i++){
            
            product = product*nums[i];
            result = max(result,product);
            if(product==0){
                product=1;
            }
        }
        product=1;
        for(int i = n-1;i>=0; i--){
            product = product *nums[i];
            result = max(result,product);
            if(product ==0){
                product =1;
            }
        }
        return result;
    }
};