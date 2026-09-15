class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++){
            int temp;      
            while(i>0 && nums[i]<nums[i-1]){
                temp = nums[i];
                nums[i]=nums[i-1];
                nums[i-1]=temp;
                i--;
            }
        }
        return nums;
    }
};