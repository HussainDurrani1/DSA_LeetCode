class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> map;
        for (auto I: nums){
            map[I] += 1;
            if (map[I] > 1) return true;
        }
        
        return false;
    }
};