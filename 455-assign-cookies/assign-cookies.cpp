
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0;  // child
        int j = 0;  // cookie
        int cnt = 0;

        while (i < g.size() && j < s.size()) {

            if (g[i] <= s[j]) {
                // Cookie can satisfy this child
                cnt++;
                i++;
                j++;
            }
            else {
                // Cookie is too small, try next cookie
                j++;
            }
        }

        return cnt;
    }
};

