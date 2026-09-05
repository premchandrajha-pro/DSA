class Solution {
public:

    int numSubarraysWithSum1(vector<int>& nums, int goal){
        if(goal < 0) return 0;
        int i=0, j=0;
        int sum = 0;
        int  cnt = 0;
        while( j < nums.size()){
            sum+=nums[j];
            while(sum > goal){
                sum = sum - nums[i];
                i++;
            }
            cnt+=j-i+1;
            j++;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans = numSubarraysWithSum1(nums,goal) - numSubarraysWithSum1(nums,goal-1);
        return ans;
    }  
};