class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int i=0;
        int j=0;
        int maxlength = 0;
        int n = s.length();
        while(j < n){

            if(mp.find(s[j]) != mp.end() && mp[s[j]] >= i){
                i = mp[s[j]] + 1;
                int len = j-i+1;
                maxlength = max(maxlength, len);

                mp[s[j]] = j;
                j++;                
            }
            else{
                mp[s[j]] = j;
                int len = j-i+1;
                maxlength = max(maxlength, len);
                j++;
            }

        }
        return maxlength;
    }
};