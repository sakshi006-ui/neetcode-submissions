class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int low =0;
        int high =n-1;
        char temp;
        while(low<=high){
            temp = s[high];
            s[high]= s[low];
            s[low]=temp;
            low++;
            high--;  
        }
        
    }
};