class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> res;
        bool insert = false;

        for(int i=0; i<intervals.size(); i++){
            int start = intervals[i][0];

            if(insert == false and start>=newInterval[0]){
                res.push_back(newInterval);
                insert = true;
            }

            res.push_back({intervals[i][0], intervals[i][1]});

        }
        if(insert==false){
            res.push_back(newInterval);
        }
        vector<vector<int>> finalRes;
        int start1 = res[0][0];
        int end1 = res[0][1];

        for(int i=1; i<res.size(); i++){
            int start2 = res[i][0];
            int end2 = res[i][1];

            if(end1 >= start2){
                start1 = start1;
                end1 = max(end1,end2);
                continue;
            }
            else{
                finalRes.push_back({start1,end1});
                start1 = start2;
                end1 = end2;
            }
        }
        finalRes.push_back({start1,end1});

        return finalRes;
        
    }
    
};