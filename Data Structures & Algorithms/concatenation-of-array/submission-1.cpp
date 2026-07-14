class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(2*n);
        int i=0;
        for(int x=0;x<n;x++){
            ans[i]=nums[x];
            ans[i+n]=nums[x];
            i++;
        }
        return ans;
    }
};