class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> count;
        for (auto val: nums){
            count[val]++;
            if (count[val] > 1) return true;
        }
        
        return false;
    }
};