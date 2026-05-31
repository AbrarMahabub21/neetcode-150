class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        bool flg = true ;
        for(auto& x : s){
            if(isalnum(x)){
               str+= tolower(x);
            }
        }
        int i = 0 , j = str.size() - 1 ;
        while(i<j){
            if(str[i] != str[j]){
                flg = false;
                break;
            }
            else{
                i++,j--;
            }
        }
        return flg;
    }
};
