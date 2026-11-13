class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val xMap = mutableMapOf<Int, Int>()
        for(i in nums.indices){
            xMap[nums[i]] = i
        }
        for(i in nums.indices){
            val diff = target - nums[i]
            if(xMap.containsKey(diff) && xMap[diff]!= i) return intArrayOf(i , xMap[diff]!!)
        }
        return intArrayOf()
    }
}
