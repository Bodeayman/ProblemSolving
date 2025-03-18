
#include <iostream>
#include <map>
#include <vector>

#define infinity LONG_MAX
#define pii pair<int, int>
#define ll long long int
#define v vector<int>
#define MP make_pair
using namespace std;

map<int, int> memo;
v items;
int houseRobbing(int n)
{
    if (memo.count(n))
        return memo[n];
    memo[n] = max(items[n] + houseRobbing(n - 2), houseRobbing(n - 1));
    return memo[n];
}
int main()
{
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        items.push_back(temp);
    }
    memo[0] = 0;
    memo[1] = items[0];
    cout << houseRobbing(k - 1) << endl;
}
// Don't know if it's good or not