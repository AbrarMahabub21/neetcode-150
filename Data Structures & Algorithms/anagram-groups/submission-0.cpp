class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>>vct;
        for(auto x : strs){
            string str = x;
            sort(str.begin(), str.end());
            mp[str].push_back(x);
        }

        for(auto x : mp){
            vct.push_back(x.second);
        }
        return vct;
    }
};
