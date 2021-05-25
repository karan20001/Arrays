vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        for(int i=0;i<n-1;i++)
        {
            if(intervals[i][1]>=intervals[i+1][0] && intervals[i][1]<=intervals[i+1][1])
            {
                if(intervals[i][0]>=intervals[i+1][0])
                {
                    intervals[i][1]=intervals[i+1][1];
                    intervals.erase(i+1);
                }
                else
                {
                    intervals[i+1][0]=intervals[i][0];
                    intervals.pop(i);
                }
            }
            else
            {
                continue;
            }
        }
    }
