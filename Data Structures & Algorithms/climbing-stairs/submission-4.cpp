class Solution {
public:
    int climbStairs(int n) {
        int n0 = 0;
        int n1 = 1;
        int result = 0;
        for(int i = 0; i < n; i++){
            result = n0 + n1;
            n0 = n1;
            n1 = result;
        }
        return result;
    }
};


// Solution 1:
// 0 -> 0
// 1 -> 1 
// 2 -> 1,2 -> 2
// 3 -> [1,2], [2,1], [1,1,1] -> 3
// 4 -> [1,1,1,1], [2, 2], [1,2,1] , [1,1,2], [2,1,1] -> 5
// 5 -> [1,1,1,1,1], [2,2,1], [1,2,2], [2,1,2], [1,1,2,1], [1,2,1,1], [2,1,1,1], [1,1,1,2] -> 8
// .... Goes on in fibonacci series

// Solution 2:
// Dynamic programming
// 