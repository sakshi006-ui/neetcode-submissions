class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=0;
        int res=0;
        int n=0;
        for(right=1;right<prices.size();right++){
            int profit = prices[right]-prices[left];
            while(prices[right] < prices[left]){
                 left++;
                 
            }
            res=max(res,profit);
        }
        if(res <0)return 0;
        return res;
    }
};
// 2 1 2 1 0 1 2 res =1
