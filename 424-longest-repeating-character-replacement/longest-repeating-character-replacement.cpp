class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxfreq = 0;
        int maxlen = 0;
        vector<int> hash(26,0);
        int i=0, j=0;
        while(j < s.length()){
            hash[s[j] - 'A']++;
            maxfreq = max(maxfreq,  hash[s[j] - 'A']);
            // max no. of operation required  = (length of segment) - maxfreq; 
            int opr = (j-i+1) -  maxfreq;

            if(opr <= k){
                maxlen = max(maxlen, j-i+1);
                j++;
            }
            else{
                hash[s[i] - 'A']--;
                i++;
                j++;
            }
        }
        return maxlen;
    }
};