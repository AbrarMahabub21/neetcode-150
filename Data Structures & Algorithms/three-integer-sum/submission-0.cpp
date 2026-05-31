class Solution {
private:
    void Threesum(int ind, vector<int> &nums, vector<vector<int>> &v){
        int j = ind+1, k = nums.size()-1;
        while(j<k){
            int sum = nums[ind]+ nums[j]+ nums[k];
          if(sum>0)k--;
          else if(sum<0)j++;
          else {
            v.push_back({nums[ind],nums[j++],nums[k--]});
            while(j<k && nums[j] == nums[j-1]) j++;
          }
        }
    };
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>vct;
        for(int i = 0 ;i <nums.size() && nums[i]<=0; i++){
            if(i == 0 || nums[i-1] != nums[i]) 
            Threesum(i,nums,vct);
            
        }
        return vct;
    }
};