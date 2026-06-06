class Solution {
public:
    int findMin(vector<int> &nums) {
        int min_val = *min_element(nums.begin(), nums.end());

        return min_val;

    }
};
