#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;
using i128 = __int128;

void solve() {
    int n;
    std::cin >> n;
    
    int ans = n / 15 * 3;
    n %= 15;
    for (int x = 0; x <= n; x++) {
        ans += (x % 3 == x % 5);
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}