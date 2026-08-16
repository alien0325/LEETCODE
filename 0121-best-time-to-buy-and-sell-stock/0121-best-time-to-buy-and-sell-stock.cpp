class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int buy = prices[0];
        // int len = prices.size();
        // int profit = 0;
        // for(int i = 0; i<len;i++){
        //     int dif = 0;
        //     if(buy > prices[i] && i != len-1){
        //         buy = prices[i];
        //     }
        //     else if(buy < prices[i]){
        //         dif = prices[i]-buy;
        //     }
        //     profit = max(dif,profit);
        // }
        // return profit;

        int mini = prices[0];
        int profit = 0;
        for(int i = 0;i<prices.size();i++){
            int cost = prices[i]- mini;
            profit = max(profit,cost);
            mini = min(mini,prices[i]);
        }
        return profit;
    }
};