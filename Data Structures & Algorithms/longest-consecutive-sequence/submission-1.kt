
class Solution {
    fun longestConsecutive(nums: IntArray): Int {
        val numMap = HashMap<Int, Int>()
        var res = 0
        for (num in nums) {
            if (numMap[num] == null) {
                val left = numMap[num - 1] ?: 0 // avoid null
                val right = numMap[num + 1] ?: 0
                val sum = left + right + 1
                numMap[num] = sum
                numMap[num - left] = sum
                numMap[num + right] = sum
                res = maxOf(res, sum)
            }
        }
        return res
    }
}
