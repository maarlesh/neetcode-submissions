class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val hash : HashMap<Int,Int> = hashMapOf<Int, Int>()
        for(i in nums.indices){
            val complement = target - nums[i]
            if(hash.contains(complement)){
                return intArrayOf(hash[complement]!!, i)
            }else{
                hash[nums[i]] = i
            }
        }
        return intArrayOf()
    }
}
