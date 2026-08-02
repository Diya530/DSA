class NumArray {
public:
    vector<int> PrefixSum;

    NumArray(vector<int>& nums){
        PrefixSum = nums;

        for(int i = 1; i<nums.size(); i++){
            PrefixSum[i] += PrefixSum[i-1];
        } 
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return PrefixSum[right];
        int RightSum = PrefixSum[right];
        int LeftSum = PrefixSum[left - 1];

        return RightSum - LeftSum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */