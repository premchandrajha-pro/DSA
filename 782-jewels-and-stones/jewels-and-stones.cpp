class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int> count(256, 0);

        for (int i = 0; i < stones.length(); i++) {
            count[stones[i]]++;
        }

        int cnt = 0;

        for (int i = 0; i < jewels.length(); i++) {
            cnt += count[jewels[i]];
        }

        return cnt;
    }
};