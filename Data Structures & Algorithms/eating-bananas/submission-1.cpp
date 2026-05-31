class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         int l = 1, r = *max_element(piles.begin(), piles.end());
         int res = r;
         
        while(l<=r){
            int mid = (l + r)/2;
            long long temp = 0;
            for(auto p : piles){
                temp += ceil(static_cast<double>(p)/mid);
            }
            if(temp <= h){
                    res = mid;
                    r = mid - 1;
            }else{
                l = mid+1;
            }
        }
        return res;
    }
};
