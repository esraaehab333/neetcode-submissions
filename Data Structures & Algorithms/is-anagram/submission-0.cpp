class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char , int> sMap ;
        unordered_map <char , int> tMap ;
        if(s.size()!= t.size()) return false;
        //count it up
        for(int i =0 ;i < s.size() ; i++){
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        // check the two maps are equals
        for(auto[c , count] : sMap){
          if(tMap[c] != count) return false;
        }
        // out for the loop this true and all is equals
        return true;
    }
};
// input -> s , t 
// output -> false , true 
// condition -> same character 
// we will use the set to order and  to count 
// the two has the same size 
// two is the lowercase too is that the hint ?