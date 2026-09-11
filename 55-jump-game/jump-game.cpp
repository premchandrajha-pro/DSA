class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reachable = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // If the current index is beyond the furthest point we can reach,
            // we are stuck and cannot proceed further.
            if (i > max_reachable) {
                return false;
            }
            
            // Update the furthest index we can reach from this point
            max_reachable = max(max_reachable, i + nums[i]);
            
            // Optimization: If we can already reach the end, no need to check further
            if (max_reachable >= n - 1) {
                return true;
            }
        }
        
        return true;
    }
};