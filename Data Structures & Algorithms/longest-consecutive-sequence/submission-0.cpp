class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // 2 20 4 10 3 10 4 5
        unordered_set<int> numSet ;
        for (int i = 0; i < nums.size(); i++) {
            numSet.insert(nums[i]);
        } // 2 20 4 10 3 5
        int longest = 0;
        for(int num : numSet){
            // 2 20 4 10 3 5 
            if(numSet.find(num-1) == numSet.end()){ // not exist
                // 2-1 = 1 X
                // 20-1 = 19 X
                // 10-1 = 9 X
                int len = 1;
                while (numSet.find(num + len) != numSet.end()) { // exist
                    // 2 + 1 = 3 
                    // 2 + 2 = 4
                    // 2 + 3 = 5
                    // 2 + 4 = 6 X
                    len++;
                }
                longest=max(longest,len);
            }
        }
        return longest;
    }
};
