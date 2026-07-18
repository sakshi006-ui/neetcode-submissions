class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(char c : s){
            if(isalnum(c)){
                a += tolower(c);
            }
        }
       
        int low =0;
        int high = a.size()-1;
        while(low <= high){
            if(a[low] != a[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};
