class TimeMap {
    map<string, vector<pair<string,int>>>mp; 
public:
    TimeMap() {
      
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        string str = "";
        auto &val = mp[key];
        int lo = 0, hi = val.size()-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
           if(val[mid].second <= timestamp){
                str = val[mid].first;
                lo = mid+1;
           }
           else{
                hi = mid-1;
           }
        }

        return str;;
    }
};
