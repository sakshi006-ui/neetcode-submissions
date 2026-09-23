class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(target > nums[n-1])
            return n;
        int low=0;
        int high=n-1;
        int res=0;
        while(low<=high){
            int guess = (low+high)/2;
            if(nums[guess] == target){
                return guess;
            }
            else if(nums[guess] > target){
                res = guess;
                high = guess-1;
            }
            else{
                low = guess+1;
            }
        }
        return res;
    }
};