class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> st;
       for(int i=0;i<nums.size();i++){
        int complement= target - nums[i]; 
       if(st.count(complement)){
        return{st[complement],i};
       }
       
        st[nums[i]]=i;
       } 
        
        return{};
    }
};
