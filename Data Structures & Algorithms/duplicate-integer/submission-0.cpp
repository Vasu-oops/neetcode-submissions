class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int flag = 0;
            for(int j = 0;j<n;j++){
                if(nums[j]==nums[i]){
                    flag++;
                }
            }
            if(flag>1){
                return true;
            }
        }
        return false;
        
    }
};