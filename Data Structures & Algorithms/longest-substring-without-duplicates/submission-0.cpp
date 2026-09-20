class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int n = s.size();
        int low=0;
        int res=0;

        for(int high=0;high<n;high++){
            map[s[high]]++;
            while(map.size() < (high-low)+1){
                map[s[low]]--;
                if(map[s[low]]==0){
                    map.erase(s[low]);
                }
                low++;
            }
            res=max(res,(high-low)+1);
        }
        return res;
    }
};
