class Solution {
public:

    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int sum1 = (N * (N + 1)) / 2;
        int sum2 = 0;
        for (int i = 0 ;i<N;i++){
            sum2 = nums[i]+sum2;
        }
        
        int missingNum = sum1 - sum2;
        

        return missingNum;
    }
};