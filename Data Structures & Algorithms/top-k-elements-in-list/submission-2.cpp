class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
      for(auto x: nums){
        mp[x]++;
      }
      vector<pair<int,int>>vct;
      for(auto x: mp){
        vct.push_back({x.second, x.first});
      }
      sort(vct.rbegin(),vct.rend());
      vector<int>SEN;
      for(int i = 0; i < k; i++){
        SEN.push_back(vct[i].second);
      }
     return SEN;
    }
};
