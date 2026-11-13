class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res (n,1);
        int prefix = 1 ; 
        for(int i = 0; i < n;i++){
            res[i]= prefix;
            prefix = prefix * nums[i];
        }
        // res -> 1 1 2 6
        int postfix = 1;
        for(int i = n-1 ; i >= 0;i--){
            res[i]= res[i]*postfix;
            postfix = postfix * nums[i];
        }
        // res -> 1*24 1*12 2*4 6*1
        return res;
    }
};
