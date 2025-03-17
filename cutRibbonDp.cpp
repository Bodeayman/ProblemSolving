#include <iostream>
#include <map>

#define infinity LONG_MAX
#define pii pair<int, int>
#define ll long long int
#define v vector<int>
#define MP make_pair
using namespace std;

map<int, int> memo;
int count(int n)
{
    if (memo.count(n))
        return memo[n];
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    memo[n] = count(n - 1) + count(n - 2) + count(n - 3);

    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    cout << count(n) << endl;
}