class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for(int i=0 ; i < prices.size(); i++){
            int profit = 0;
            for(int j= i+1 ; j < prices.size(); j++){
                profit = prices[j] - prices[i];
                maxProfit = max(profit, maxProfit);
            }
        }
        return maxProfit;
    }
};


// 10
// 0

// 1
// -9

// 5
// -5

// 6
// -4

// 7
// -3

// 1
// -9

