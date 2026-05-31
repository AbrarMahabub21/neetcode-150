class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,maxCnt = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums.size() == 0) return cnt;
            if(nums[i+1]- nums[i] == 1) cnt++,maxCnt = max(maxCnt, cnt);
            if(nums[i] == nums[i+1])continue;
            if(nums[i+1] - nums[i] > 1) cnt = 0;
        }
        return maxCnt+1;
    }
};