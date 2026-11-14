class Solution {
    fun isPalindrome(s: String): Boolean {
       val str = s.filter { it.isLetterOrDigit() }.lowercase()
        // wasitacarorcatisaw
        var i = 0 
        var j = str.length - 1
        while(i<j){
            if(str[i]!=str[j]){
                return false
            }
            i++
            j--
        }
        return true
    }
}
