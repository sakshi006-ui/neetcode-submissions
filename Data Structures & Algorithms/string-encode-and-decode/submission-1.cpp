class Solution {
public:
    string s;
    string encode(vector<string>& strs) {
        for(string str : strs){
            int n = str.length();
            s += to_string(n);
            s += "#";
            s += str;
        }
        return s;
    }

    vector<string> decode(string s) {
        int i=0;
        int j=0;
        vector<string>res;
        while(i<s.length()){
            j=i;
            while(s[j] != '#'){
                j++;
            }
            int len =0;
            for (int k = i; k < j; k++) {
                len = len * 10 + (s[k] - '0');
            }
            
            i=j+1;
            string ans = s.substr(i, len);
            res.push_back(ans);
            i=i+len;
        }
        return res;
    }
};
