class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int Curr = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > Curr) {
                maxProfit += prices[i] - Curr;
                Curr = prices[i];
            }else {
                Curr = prices[i];
            }
        }
        return maxProfit;
    }
};