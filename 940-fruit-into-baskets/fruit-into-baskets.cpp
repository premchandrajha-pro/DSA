class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0;
        int maxlength = 0;
        map<int, int> mp;

        while (j < fruits.size()) {
            mp[fruits[j]]++;

            if (mp.size() > 2) {
                mp[fruits[i]]--;

                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }

                i++;
            }
            else {
                maxlength = max(maxlength, j - i + 1);
            }

            j++;
        }

        return maxlength;
    }
};