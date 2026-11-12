class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        val setName = mutableSetOf<Int>()
        for (num in nums){
            setName.add(num)
        }
        return setName.size != nums.size
    }
}
