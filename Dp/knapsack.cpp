for (int i = 1; i <= n; ++i) {
    for (int w = 0; w <= capacity; ++w) {
        if (weight[i] <= w)
            dp[i][w] = max(dp[i-1][w], dp[i-1][w - weight[i]] + value[i]);
        else
            dp[i][w] = dp[i-1][w];
    }
}
// This is the knapsack problem
