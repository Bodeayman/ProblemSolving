#include <bits/stdc++.h>
#include <cmath>
#include <math.h>

#define v vector<int>
using namespace std;

v coins;

int minCoins(vector<int>dp , int target){
    for(int i = 0 ;i < coins.size();i++){
        for(int j = coins[i] ;j <= target;j++){
            if(dp[j - coins[i]] != INT_MAX){
                dp[j] = min(dp[j],dp[j-coins[i]]+1);

            }
        }
    }
    return (dp[target] == INT_MAX ) ? -1 : dp[target];
}
int main() {
    int n;
    cin >> n;
    for(int i = 0 ;i <n;i++){
        int temp;
        cin >> temp;
        coins.push_back(temp);
    }
    int target ;
    cin >> target;
    vector<int>dp(target+1,INT_MAX);
    dp[0] = 0;

    cout<< minCoins(dp,target) << endl;

}
// The recurrence relation of the dp is min (dp[i],dp[i-coins[j]]+1)
