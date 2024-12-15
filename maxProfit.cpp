#include <bits/stdc++.h> 
#include<algorithm>
//using greedy approach to solve the max profit question
//we are calculating the minimum price, and the max profit in one iterartion of the array
int maximumProfit(vector<int> &prices){
    int n = sizeof(prices)/sizeof(prices[0]);
    int minP = prices[0];
    int maxP = 0;
    for (int i = 0; i<n; i++)
    {
        minP = min(minP, prices[i]);
        maxP = max(maxP, prices[i] - minP);
    }
    return maxP;
}