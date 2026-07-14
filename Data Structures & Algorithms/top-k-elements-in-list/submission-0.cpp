class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        vector<int>ans;
        for(int i = 0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),
            [&](int a , int b) {
                if(mp[a] == mp[b]) {
                    return a > b;
                }
                return mp[a] > mp[b];
            }
        );

        int count = 1;
        ans.push_back(nums[0]);
        for(int i = 1;i<nums.size();i++) {
            if(count < k && nums[i] != nums[i-1]){
                ans.push_back(nums[i]);
                count++;
            }
        }
        return ans;


    }
};
