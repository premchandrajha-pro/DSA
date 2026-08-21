class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(), nums1.end());
        set<int> ans;
        for(int x : nums2){
            if(s.find(x) != s.end()){
                ans.insert(x);
            }
        }

        vector<int> final(ans.begin(),ans.end());

        return final;
    }
};