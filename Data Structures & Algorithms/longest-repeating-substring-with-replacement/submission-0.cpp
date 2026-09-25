class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int freq[26] = {0};
        int low=0;
        int maxfreq=0;
        int res = 0;
        for(int high=0;high<n;high++){
            int ch = s[high];
            freq[ch - 'A']++;

            maxfreq = max(maxfreq,freq[ch - 'A']);

            while((high - low + 1) - maxfreq > k){
                freq[s[low] - 'A']--;
                low++;
            }
            res = max(res,(high-low) +1);
        }
        return res;
    }
};
