class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());
        int num = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == num) count++;
            if (nums[i] != num){
                count = 0;
                num = nums[i];
            }
            if (count > 0) return true;
        }
        return false;
    }
};