class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sets;
        for(int i=0 ; i < nums.size(); i++){
            if(sets.contains(nums[i])){
                return true;
            }else{
                sets.insert(nums[i]);
            }
        }
        return false;
    }
};