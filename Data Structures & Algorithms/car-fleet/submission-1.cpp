class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
      vector<pair<int,int>>cars;
      stack<float>fleet;
      stack<float>temp;
      for(int i = 0; i < position.size(); i++){
        cars.push_back({position[i],speed[i]});
      }
      sort(cars.begin(), cars.end());

      for(int i = 0; i < cars.size(); i++ ){
        float time = (float)(target - cars[i].first ) / cars[i].second;
        temp.push(time);
      }

      if(fleet.empty()) {
        fleet.push(temp.top());
        temp.pop();
      }

      while(!temp.empty()){
        float x = temp.top();
        if(x <= fleet.top() ) {temp.pop();}
        else{
            fleet.push(x);
            temp.pop();
        }
      }
        return fleet.size();
    }
};
