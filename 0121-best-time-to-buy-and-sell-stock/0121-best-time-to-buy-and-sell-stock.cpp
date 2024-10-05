class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxdif=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            min=prices[i];
            if(prices[i]-min>maxdif)
            {
               maxdif=prices[i]-min;
            }
        }
        if(maxdif<0)
        return 0;
        return maxdif;
    }
};