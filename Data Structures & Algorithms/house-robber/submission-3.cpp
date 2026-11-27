class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int result = INT_MIN;
        for(int i = 0; i < n; i++){
            result = max(nums[i], result);
        }
        if(n < 3){
            return result;
        }
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = nums[0] + nums[2];
        int i = 3;
        int maxLoot = dp[2] < result ? result : dp[2];
        while(i < n){
            if(dp[i-2] > dp[i-3]){
                dp.at(i) = dp[i-2] + nums[i];
            }else{
                dp.at(i) = dp[i-3] + nums[i];
            }
            maxLoot = max(maxLoot ,dp.at(i));
            i++;
        }
        
        cout<<endl;
        for(int i=0; i < dp.size(); i++){
            cout<<"\t"<<dp[i];
        }
        cout<<endl;
        return maxLoot;
    }
};