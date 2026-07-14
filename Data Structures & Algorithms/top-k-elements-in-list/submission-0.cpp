class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>f;
        for(int num : nums){
            f[num]++;
        }
        vector<pair<int,int>>ans;
        for(auto &it : f){
            ans.push_back({it.second , it.first});
        }
        sort(ans.begin(),ans.end(),greater<pair<int,int>>());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};
