class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // Brute Force: Square everything and sort $\rightarrow$ $O(n \log n)$ time, $O(1)$ extra space (excluding output)
        // .Optimal (Two Pointers): Fill the output array in a single pass $\rightarrow$ $O(n)$ time and $O(n)$ space.
        vector<int> res(nums.size());
        int i=0;
        int j=nums.size()-1;
        int n=nums.size()-1;
        while(i<=j){
            if(abs(nums[i])>=abs(nums[j])){
                res[n]=(nums[i]*nums[i]);
                i++;
            }
            else{
                res[n]=(nums[j]*nums[j]);
                j--;
            }
            n--;
        }
        return res;
    }

};