class Solution {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val mMap = mutableMapOf<List<Int>,MutableList<String>>() // frequancy , list of string
        for(s in strs){
            val count = MutableList(26){ 0 } // to can edit 
            for(c in s ){
                count[c - 'a']++
            }
            mMap.getOrPut(count){mutableListOf()}.add(s)
        }
        return mMap.values.toList()
    }
}
