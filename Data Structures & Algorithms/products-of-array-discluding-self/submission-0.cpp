class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        vector<int>prodarr;
        
        for(int i = 0;i<nums.size();i++) {
            
            int prod=1;
            for(int j = 0;j<nums.size();j++) {
                if(i == j) {
                    continue;
                }
                else {
                    prod *= nums[j];
                }
            }
            prodarr.push_back(prod);
        }
        for (int i = 0;i<prodarr.size();i++) {
            ans.push_back(prodarr[i]);
        }
        return ans;

    }
};
