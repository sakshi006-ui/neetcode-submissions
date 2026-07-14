class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for (int x : nums)
            mp[x]++;

        vector<int> res;

        for (auto &p : mp) {
            if (p.second > nums.size() / 3)
                res.push_back(p.first);
        }

        return res;
    }
};