bool cmp(const vector<int> x,const vector<int> y)
{
    return x[1] < y[1];
}
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0){
            return 0;
        }
        sort(points.begin(), points.end(), cmp);
        int end = points[0][1];
        int cnt = 1;
        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][0] <= end)
            {
                continue;
            }
            else
            {
                end = points[i][1];
                cnt++;
            }
        }

        return cnt;
    }
};