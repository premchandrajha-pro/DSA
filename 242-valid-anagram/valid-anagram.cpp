class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26);
        int n1 = s.length();
        int n2 = t.length();

        if(n1 != n2) return false;

        for(int i=0; i<n1; i++){
            count[s[i] - 'a']++ ;
        }
        for(int i=0; i<n2; i++){
            count[t[i] - 'a']-- ;
        }

        for(int i=0; i<26; i++){
            if(count[i] != 0){
                return false;
                break;
            }            
        }
        return true;
    }
};