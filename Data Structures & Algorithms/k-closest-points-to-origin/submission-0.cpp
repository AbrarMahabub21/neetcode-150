class Solution {
public:
    struct cmp{
        bool operator()(vector<int> &a, vector<int> &b){
        int distA = a[0]*a[0] + a[1]*a[1];
        int distB = b[0]*b[0] + b[1]*b[1];

        return distA > distB;
    }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<int>, vector<vector<int>>, cmp> pq(points.begin(), points.end());
        vector<vector<int>>res;
        while(k != 0){
            vector<int> x = pq.top();
            res.push_back(x);
            pq.pop();
            k--;
        }
        return res;
    }
};
