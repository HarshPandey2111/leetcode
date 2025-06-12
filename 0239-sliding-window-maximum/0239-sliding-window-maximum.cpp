class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;
        for(int i = 0; i<n ;i++){
            //condition for maintaining the dq
            if(!dq.empty() && dq.front()<=(i-k)){
                dq.pop_front();
            }
            // for maintaining the condition of the dq in order to make it in decreasing order only
            while(!dq.empty() && nums[dq.back()]<= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            //now addig to the ans 
            if(i >=(k-1)){
                ans.push_back(nums[dq.front()]);
            }
            
        }
        return ans ;
        
    }
};