class Solution:
    def maxProfit(self, prices):
        profit = 0
        amount_to_sell = prices[-1]
        for i in range(len(prices)-2,-1,-1):
            current_profit = amount_to_sell-prices[i]
            if current_profit < 0:
                amount_to_sell = prices[i]
            else:
                profit = max(current_profit,profit)
                
        return profit