class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        vector<int>ans;
        for(int i = 0;i<nums.size();i++) {
            mp[nums[i]]++;
        }
        // sort(nums.begin(),nums.end(),
        //     [&](int a , int b) {
        //         if(mp[a] == mp[b]) {
        //             return a > b;
        //         }
        //         return mp[a] > mp[b];
        //     }
        // );

        vector<vector<int>>bucket(nums.size() + 1); // 2d for multiple elemnts with same freq
        // and size+1 because no num will be freq = 0 , so we need extra index

        for(auto &it: mp) {
            int num = it.first;
            int freq = it.second;

            bucket[freq].push_back(num); //we cant do this with 1-d vector
        }

        vector<int>check;

        

        for(int i = nums.size();i>=1;i--) {
            for(int num : bucket[i] ) {
                //check.insert(check.end(),i,num);
                ans.push_back(num);
                if(ans.size() == k) {
                    return ans;
                }
            }
        }

        // int count = 1;
        // ans.push_back(check[0]);
        // for(int i = 1;i<check.size();i++) {
        //     if(count < k && check[i] != check[i-1]){
        //         ans.push_back(check[i]);
        //         count++;
        //     }
        // }
        return ans;


    }
};
