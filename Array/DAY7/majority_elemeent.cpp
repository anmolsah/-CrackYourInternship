class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //used moore's voting algorithm for optimal solution
        int n = nums.size();
        int count = 0;
        int ele ;

        for(int i=0;i<n;i++){
            if(count == 0){
                count++;
                ele = nums[i];
            }else if(nums[i] == ele){
                count++;
            }else{
                count--;
            }
        }

        int c = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == ele ) c++;
        }

        if(c > n/2) return ele;
        return -1;
    }
};