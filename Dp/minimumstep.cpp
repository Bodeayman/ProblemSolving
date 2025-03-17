#include <iostream>
#include <map>

#define infinity LONG_MAX
#define pii pair<int, int>
#define ll long long int
#define v vector<int>
#define MP make_pair
using namespace std;

map<int, int> memo;

int count(int n, int k)
{
    if (memo.count(n))
        return memo[n];
    if (n == k)
        return 1;
    if (n > k)
        return 0;
    memo[n] = count(n + 1, k) + count(n * 2, k);
    return memo[n];
}
int main()
{
    int k;
    cin >> k;
    cout << count(1, k) << endl;
}
// Don't know if it's good or not