class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int sum = 0;
        int buy = prices[0];

        for(int i = 1 ; i<n; i++){
            if(buy > prices[i]){
                buy = prices[i];
            }
            else {
                sum += prices[i] - buy;
                buy = prices[i];
            }
        }
        return sum;
    }
};