class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int , int > xMap; // value , index
        for(int i = 0; i<nums.size();i++){
            xMap[nums[i]] = i;
        }
        for(int i =0 ; i < nums.size() ; i++){
            int diff = target - nums[i];
            if(xMap.find(diff)!=xMap.end() && xMap[diff]!= i) return {i , xMap[diff]};
        }
    }
};
// input -> nums , target
// output -> [i,j]
// condition -> nums[i]+ nums[j] = target
// solution with two pointer ?