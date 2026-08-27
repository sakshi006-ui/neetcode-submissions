class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        
        int area=0,maxi=0;
        int left = 0;
        int right = n-1;
        while(left<right){
            int h = min(heights[left], heights[right]);
            area=(right-left)*h;
            maxi = max(maxi,area);
            if(heights[left] < heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maxi;
    }
};
