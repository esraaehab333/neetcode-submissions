class Solution {
    fun productExceptSelf(nums: IntArray): IntArray {
        val n = nums.size
        val res = IntArray(n) {1}
        var prefix = 1
        for(i in nums.indices){
            res[i]=prefix
            prefix *= nums[i]
        }
        var postfix = 1
        for(i in nums.size -1 downTo 0){
            res[i] *= postfix
            postfix *=nums[i]
        }
        return res
    }
}
