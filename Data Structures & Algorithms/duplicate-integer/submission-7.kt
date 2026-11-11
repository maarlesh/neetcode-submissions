class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        val sets = hashSetOf<Int>()
        nums.forEach{num ->
            if(sets.contains(num)){
                return true;
            }else{
                sets.add(num)
            }
        }
        return false;
    }
}
