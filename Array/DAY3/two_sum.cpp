class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int>mp;
        vector<int>result;

        for(int i=0;i<n;i++){
            int a = nums[i];
            int addOnElement = target - a;
            if(mp.find(addOnElement) != mp.end()){
                result = {mp[addOnElement],i};
            }
            mp[a] =i;
        }
        return result;
    }
};