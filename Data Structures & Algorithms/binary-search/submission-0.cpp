class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0;
        int high=n-1;
        int res=0;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low++;
            }else{
                high--;
            }
        }
        return -1;
    }
};
