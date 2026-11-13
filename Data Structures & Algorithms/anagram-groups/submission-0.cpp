class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mMap;
        for(int i =0 ;i < strs.size() ;i++){
            int count[26] = {0};
            for(int c : strs[i]){
                count[c-97]++; // eat 
            }
            // convert the array to string
            string key ="";
            for(int j = 0; j<26 ; j++){
                key = key + to_string(count[j]) + "|";
            }
            mMap[key].push_back(strs[i]);
        }
        vector<vector<string>> result ;
        for (auto entry : mMap) {
            result.push_back(entry.second);
        }
        return result;
    }
};
