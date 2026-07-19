class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //1,2,3
        int left=0;
        int right=accumulate(nums.begin(), nums.end(), 0);
        for(int i=0;i<nums.size();i++){
            if(right-left==nums[i]){
                return i;
            }
            left+=nums[i];
            right-=nums[i];
            
        }
        return -1;
    }
};