class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> num;
        for (int i = 0;i<nums.size();i++) {
            num[nums[i]]++;
        }
        bool ans = false;
        for (auto &it : num) {
            
            if(it.second > 1) {
                ans = true;
            }
        } 
        return ans;      
    }
};