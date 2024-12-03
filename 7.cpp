class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int lowest = 0, next = 1;
        while(next < n){
            if(prices[lowest] > prices[next])
                lowest = next;
            else if(profit < prices[next]  - prices[lowest] ){
                profit = prices[next]  - prices[lowest];
            }
            next++;
        }
        return profit;
    }
};