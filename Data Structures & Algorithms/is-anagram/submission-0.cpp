class Solution {
public:
    bool isAnagram(string s, string t) {
        bool verdict;
        sort(s.begin(),s.end());
        sort(t.begin(), t.end());
        (s==t)? verdict = true: false;
        return verdict;
    }
};
