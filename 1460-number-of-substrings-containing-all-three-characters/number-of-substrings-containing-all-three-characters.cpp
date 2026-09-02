class Solution {
public:
    int numberOfSubstrings(string s) {

/*
        int i=0;
        int j=0;
        int cnt = 0;
        vector<int> hash(3);

        while(j < s.length()){
            hash[s[j] - 'a'] = 1;
            if(hash[0] + hash[1] + hash[2] == 3){
                cnt+= s.length() - j;
                i++;
                //hash[s[i-1] - 'a'] -= 1;
                j = i;
                hash = vector<int>(3, 0);
            }
            else j++;
        }
        return cnt; 

*/


        int cnt = 0;
        vector<int> lastseen = {-1, -1, -1};
        for(int i=0; i<s.length(); i++){
            lastseen[s[i] - 'a'] = i;

            if(lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1){
                cnt += 1 + min({lastseen[0], lastseen[1], lastseen[2]});
            }
        }
        return cnt;
    }   
};