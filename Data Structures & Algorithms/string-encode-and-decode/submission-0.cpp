class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s:strs) {
            ans += to_string(s.length()) + "#";
            ans += s;
        }
        return ans;

    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i= 0;
        while(i < s.size()) {
            string len= "";
            while(s[i] != '#') {
                len += s[i];
                i++;
            }
            i++;
            int lengthofstring = stoi(len);
            string sol="";

            for(int j = 0;j<lengthofstring;j++) {
                sol += s[i+j];

            }
            i+=lengthofstring;
            ans.push_back(sol);
        }
        return ans;
    }
    
};
