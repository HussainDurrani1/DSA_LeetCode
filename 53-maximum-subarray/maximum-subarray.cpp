class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxGlobalSum = INT_MIN;
        int maxLocalSum = 0;

        for (int i = 0; i < nums.size(); i++){
            maxLocalSum = max(nums[i], nums[i] + maxLocalSum);
            if (maxLocalSum > maxGlobalSum) maxGlobalSum = maxLocalSum;
        }
        return maxGlobalSum;
    }
};