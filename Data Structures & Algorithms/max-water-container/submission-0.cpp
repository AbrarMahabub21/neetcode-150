class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxAr = 0;
        for(int i = 0 ; i < heights.size(); i++){
            if(heights.size() == 0) return maxAr;
            for(int j = 0; j< heights.size(); j++){
                if(i  == j)continue;
                int area = abs(j-i)*min(heights[i],heights[j]);
                maxAr = max(maxAr, area);
            }
        }
        return maxAr;
    }
};
