class KthLargest {
public:
    int k;
    int kLargest;
    priority_queue<int, vector<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        this->pq = priority_queue<int, vector<int>>(nums.begin(), nums.end());
    }
    
    int add(int val) {
        pq.push(val);
        priority_queue<int, vector<int>>pq2;
        pq2 = pq;
        int temp = k;
        while(temp>1){
           pq2.pop();
           temp--;
        }
        return pq2.top();
    }
};
