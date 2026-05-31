class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //     unordered_map<int,int>mp;
    //     for(auto x:nums){
    //         mp[x]++;
    //     }

    //     for(auto x: mp){
    //         if(x.second > 1){
    //             return true;
    //             break;
    //         }else{
    //             return false;
    //         }
    //     }
    // return true;

    sort (nums.begin(),nums.end());
    for(int i = 1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]){
            return true;
        }
    }
    return false;
    }
};
