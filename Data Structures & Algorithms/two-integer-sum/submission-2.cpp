class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j =i+1;j<n;j++){
                int target_sum = nums[j] + nums[i];
                if(target_sum == target){
                    return {i,j};
                }
            }
        }
    }
};
