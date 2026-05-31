class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>vct;
        for(auto x :  tokens){
            int a,b;
            if(x == "+"){
                a = vct.top();
                vct.pop();
                b = vct.top();
                vct.pop();
                 vct.push(a + b);
            }
            else if(x == "-"){
                
                a = vct.top();
                vct.pop();
                b = vct.top();
                vct.pop();
                vct.push(b-a);
            }
            else if(x == "*"){
                a = vct.top();
                vct.pop();
                b = vct.top();
                vct.pop();
                vct.push(a * b);
            }
            else if(x == "/"){
                a = vct.top();
                vct.pop();
                b = vct.top();
                vct.pop();
                vct.push(b / a);
            }
            else vct.push(stoi(x));
        }
        return vct.top();
    }
};
