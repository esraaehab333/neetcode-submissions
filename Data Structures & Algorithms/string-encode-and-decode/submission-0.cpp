class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string s : strs ){
            res += to_string(s.size())+'#'+s;
        }
        return res ;
    }

    vector<string> decode(string s) {
        vector <string> res ;
        int i = 0; 
        while (i< s.size()){
            int len = 0 ; // len = 0
            while(s[i]!='#'){
                len = len * 10 +(s[i]- '0'); // convert the len to integer 
                i++;
            }
            i++; 
            string word ="";
            for(int j =0; j< len ; j++){
                word += s[i];
                i++;
            }
            res.push_back(word);
        }
        return res;
    }
};
