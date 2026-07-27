class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();

        int PrevWithDel = 0;
        int PrevNotDel = arr[0] , res = arr[0];

        for(int i = 1; i<n; i++){
            PrevWithDel = max(PrevNotDel, PrevWithDel + arr[i]);
            PrevNotDel = max(PrevNotDel + arr[i], arr[i]);

            res = max(res, max(PrevWithDel,PrevNotDel));
        }
        return res;
    }
};