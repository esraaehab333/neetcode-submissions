class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        val frequancy = mutableMapOf<Char,Int>()
        if(s.length != t.length ) return false 
        for(i in s.indices){
           frequancy[s[i]] = (frequancy[s[i]] ?: 0) + 1 // void null
           frequancy[t[i]] = (frequancy[t[i]] ?: 0) - 1
        }
        return frequancy.values.all{ it == 0 }
    }
}
// input -> s , t 
// output -> false , true 
// condition -> same character 
// we will use the set to order and  to count 