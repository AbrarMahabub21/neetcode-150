class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0, j = n-1;
        while(i<j){
            if(nums[i]+nums[j]>target) j--;
            if(nums[i]+nums[j]<target) i++;
            if(nums[i]+nums[j] == target) return {i+1,j+1};
        }

        
    }
};
