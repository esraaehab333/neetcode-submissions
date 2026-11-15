class Solution {
    fun evalRPN(tokens: Array<String>): Int {
        val st= ArrayDeque<Int>()
        for(token in tokens){
            when(token){
                "+"-> {
                    val a = st.removeLast()
                    val b = st.removeLast()
                    st.addLast(b+a)
                }
                "-"->{
                    val a = st.removeLast()
                    val b = st.removeLast()
                    st.addLast(b-a)
                }
                "/"->{
                    val a = st.removeLast()
                    val b = st.removeLast()
                    st.addLast(b/a)
                }
                "*"->{
                    val a = st.removeLast()
                    val b = st.removeLast()
                    st.addLast(b*a)
                }
                else ->{
                    st.addLast(token.toInt())
                }
            }
        }
        return st.last()
    }
}
