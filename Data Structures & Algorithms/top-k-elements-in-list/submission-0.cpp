class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1 1 1 2 2 2 3 3 4
        unordered_map <int, int> countMap;
        vector<vector<int>> freqList(nums.size()+1);
        for(int i : nums){
            countMap[i]++;
            // 0 1 2 3 4 5 6
            // 0 3 3 2 1 0 0
        }
        for(auto i : countMap){
            freqList[i.second].push_back(i.first);
            // all has 3 push in the index of array 
            // [],[4],[3],[1,2],[]
        }
        vector<int> res ;
        for(int i = freqList.size()-1 ; i >0; i--){ // 2
            for(int n : freqList[i]){
                res.push_back(n);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;
    }
};
// input -> nums , k 
// output -> k
// condition -> k is the most fequnce number may be array 
