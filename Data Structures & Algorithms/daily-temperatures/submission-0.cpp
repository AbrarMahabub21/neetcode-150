class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int>vct(n,0);
        bool flg = false;  
        int greatest = temp[0];
        for(int i = 0; i < n ; i++){
            for(int j = i+1; j < n ; j++){
                if(temp[i]<temp[j]){
                    // flg = true;
                    greatest = temp[j];
                    vct[i] = j-i;
                    break;
                }
                // if (flg == false) vct.push_back(0);
                
                
            }
        }
        return vct;
    }
};
