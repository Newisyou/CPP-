#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector < vector<int>> vec(1 + n, vector<int>(1 + n));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> vec[i][j];
        }
    }
    const int small = -1000000000;
    vector<vector<int>> ans(n + 1, vector<int>(n + 1, small));
    ans[0][0] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            ans[i][j] = ans[i - 1][j];
            for (int k = 1; k <= j; ++k) {
                ans[i][j] = max(ans[i][j], vec[k][i] + ans[i - 1][j - k]);
            }
        }
    }
    cout << ans[n][n];

}