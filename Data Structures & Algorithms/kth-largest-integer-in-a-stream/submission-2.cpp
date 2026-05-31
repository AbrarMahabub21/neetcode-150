class KthLargest {
public:
    int k;
    int kLargest;
    priority_queue<int, vector<int>, greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->pq = priority_queue<int, vector<int>, greater<int>>(nums.begin(), nums.end());
    }
    
    int add(int val) {
        pq.push(val);

        while(pq.size()>k){
            pq.pop();
        }
        
        return pq.top();
    }
};
