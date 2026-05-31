class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto x : s){
            if(x == '(' || x == '{' || x == '[') st.push(x);
            else
            if(!st.empty() && ((st.top() == '(' && x == ')') || (st.top() == '{' && x == '}') || (st.top() == '[' && x == ']'))){
                st.pop();
            }else return false;
        }

    if(st.empty()) return true;
    else return false;
    }
};
