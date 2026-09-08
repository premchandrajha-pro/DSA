class Solution {
public:
    int min_odd(vector<int>& nums1){
        int mini = INT_MAX;
        int index = -1;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2 == 1){
                mini = min(mini, nums1[i]);
            }
        }
        return mini;
    }
    bool uniformArray(vector<int>& nums1) {
        int mini = min_odd(nums1);
        if(mini == INT_MAX) return true;

        for(int i=0; i<nums1.size(); i++){

            if(nums1[i]%2 == 0){
                if(nums1[i] - mini < 1) return false;
            }
        }
        return true;
    }
};