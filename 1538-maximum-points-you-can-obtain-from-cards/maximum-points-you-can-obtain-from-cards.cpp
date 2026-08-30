class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum = 0;
        int lsum = 0;
        int rsum = 0;
        int n = cardPoints.size();
        for(int i=0; i<k; i++){
            lsum+=cardPoints[i];
        }
        int maxsum = lsum;  // initially lsum = maxsum

        int rindex = n-1; 
        for(int j = k-1; j>=0;j--){
            lsum = lsum - cardPoints[j];
            rsum += cardPoints[rindex];

            sum = lsum + rsum;
            maxsum = max(maxsum, sum);

            rindex-=1;
        }

        return maxsum;
    }
};