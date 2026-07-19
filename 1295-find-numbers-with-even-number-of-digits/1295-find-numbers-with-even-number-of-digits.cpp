class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(int x:nums){
            if((x>=10 && x<100) || (x>=1000 && x<10000) || x==100000){
                res++;
            }
        }
        return res;
    }
};