class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<k%n;i++){
            int j= n-1;
            int element =nums[j];
            while(j>0){
                nums[j]=nums[j-1];
                j--;
            }
            nums[0]=element;
            
        }
    }
};