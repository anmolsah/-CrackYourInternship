class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;
        for(int i=0;i<k;i++){
            total +=cardPoints[i];
        }

        int maxPoints = total;

        int left = k-1;
        int right = n-1;

        for(int i=0;i<k;i++){
            total = total - cardPoints[left] + cardPoints[right];
            maxPoints = max(maxPoints,total);
            left--;
            right--;
        }
        return maxPoints;
    }
};