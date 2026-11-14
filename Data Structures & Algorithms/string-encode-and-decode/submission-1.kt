class Solution {

    fun encode(strs: List<String>): String {
        var x : String = "";
        for(s in strs){
            x += s.length.toString() + '#' + s
        }
        return x
    }

    fun decode(str: String): List<String> {
        //4#neet5#Co#de
        var res = mutableListOf<String>()
        var i = 0
        while(i<str.length){
            var len = 0
            while(str[i]!='#'){
                len = len *10 + (str[i]-'0')
                i++
            }
            i++
            var word = ""
            for (k in 0 until len) {
                word += str[i]
                i++
            }
            res.add(word)
        }
        return res
    }
}
