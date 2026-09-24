class Solution {
public:
    int eatingHour(vector<int>& piles,int guess,int n){
        int hour =0;
        for(int i=0;i<n;i++){
            if(piles[i]%guess == 0){
                hour += piles[i]/guess;
            }else{
                hour += (piles[i]/guess)+1;
            }
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low =1;
        int high = *max_element(piles.begin(), piles.end());
        int k;
        int res = 0;
        while(low<=high){
            int guess = (low+high)/2;
            k = eatingHour(piles,guess,n);
            if(k > h){
                low=guess+1;
            }else{
                res = guess;
                high = guess-1;
            }
        }
        return res;
    }
};
