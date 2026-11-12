class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> setName ;
        for(int num : nums){
            setName.insert(num);
        }
        return (setName.size() != nums.size());
    }
};
// input -> nums 
// output -> false or true
// condition -> number is appear once
// one -> frequance array 
// two -> sort and return 
// three -> two for loop 
// four -> HashSet ? store the array again the the HashSet and Compare the length 
// how can i solve it in o(n)
// the best solution is the HashSet 