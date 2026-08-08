class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newinterval) {
        
        vector<vector<int>> insert;
        bool insertflag = false;

        for(int i = 0; i < intervals.size(); i++) {
            
            if(insertflag == false && newinterval[0] <= intervals[i][0]) {
                insert.push_back(newinterval);
                insertflag = true;
            }

            insert.push_back(intervals[i]);
        }

        if(insertflag == false) {
            insert.push_back(newinterval);
        }

        vector<vector<int>> result;

        int start1 = insert[0][0];
        int end1 = insert[0][1];

        for(int i = 1; i < insert.size(); i++) {
            
            int start2 = insert[i][0];
            int end2 = insert[i][1];

            if(end1 >= start2) {
                end1 = max(end1, end2);
            }
            else {
                result.push_back({start1, end1});

                start1 = start2;
                end1 = end2;
            }
        }

        result.push_back({start1, end1});

        return result;
    }
};