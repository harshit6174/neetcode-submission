class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        unordered_map<char,int>s1;
        for(int i = 0;i<s.size();i++) {
            s1[s[i]]++;
        }

        unordered_map<char,int>t1;
        for(int j = 0;j<t.size();j++) {
            t1[t[j]]++;
        }

        //bool ans = true;
        for(int i = 0;i<s.size();i++) {
            if(s1[s[i]] != t1[s[i]]) {
                return false;
                
            }
        }
        return true;

     }
};
