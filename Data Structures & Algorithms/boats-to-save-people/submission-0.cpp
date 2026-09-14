class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // 1 3 2 3 2    1 2 4 5
        // 1 2 2 3 3

        sort(people.begin(),people.end());
        int left=0;
        int right=people.size()-1;
        int ans=0;
        while(left<=right){
            if((people[left]+people[right])> limit){
                right--;
            }else{
                left++;
                right--;
            }
            ans+=1;
        }
        return ans;
    }
};