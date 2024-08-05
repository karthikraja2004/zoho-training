#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int minSquares(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

        return dp[n];
    }

int main() {
    int number;
    cin>>number;
    cout << "The minimum number of squares required to sum up to " << number << " is: " << minSquares(number) << endl;
    return 0;
}