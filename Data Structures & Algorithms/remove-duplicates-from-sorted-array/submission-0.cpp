class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int cm=0,i=1;
        while(i<n){
            if(nums[i]==nums[i-1]){
                i++;
            }else{
                cm++;
                nums[cm]=nums[i];
                i++;
            }
        }
        return cm+1;
    }
};