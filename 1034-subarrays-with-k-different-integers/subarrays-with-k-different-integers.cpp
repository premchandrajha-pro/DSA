class Solution {
public:

    int subarraysWithKDistinct1(vector<int>& nums, int k) {
        int i=0, j=0;
        map<int,int> mpp;
        int cnt = 0;

        while(j < nums.size()){
            mpp[nums[j]]++ ;
            while(mpp.size() > k){
                mpp[nums[i]]--;
                i++;
                if(mpp[nums[i-1]] == 0){
                    mpp.erase(nums[i-1]);
                }
            }
            cnt += j-i+1;
            j++;
        }
        return cnt;
    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {

        int result = subarraysWithKDistinct1(nums,k)  - subarraysWithKDistinct1(nums,k-1);
        return result;
    }
};