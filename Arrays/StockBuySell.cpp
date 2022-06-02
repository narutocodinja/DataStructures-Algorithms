int maxProfit(vector<int>& prices) {
        int maxpr = 0;
        int minprice = prices[0];
        
        for(int i = 0; i < prices.size(); i++){
            maxpr = max(maxpr, prices[i] - minprice);
            minprice = min(prices[i],minprice);
        }
        return maxpr;
    }
