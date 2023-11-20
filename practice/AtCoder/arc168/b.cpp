/*
 * @uni_kakurenbo
 * https://github.com/uni-kakurenbo/competitive-programming-workspace
 *
 * CC0 1.0  http://creativecommons.org/publicdomain/zero/1.0/deed.ja
 */
/* #language C++ 20 GCC */
#include "template/standard.hpp"

void solve();

signed main() {
    debug(__cplusplus);
    int $ = 1;
    // std::cin >> $;
    for(int _ = 0; _ < $; ++_) {
        DEBUG("Case: #" + std::to_string(_));
        solve();
    }
    return 0;
}

void solve() {
    int n; input >> n;
    valarray<i64> a(n); input >> a;

    lib::counter cnt(ALL(a));

    i64 xr = std::accumulate(ALL(a), 0, std::bit_xor<>{});
    if(xr != 0) {
        print(-1);
        return;
    }

    i64 ans = 0;

    a.sort();
    ITR(v, a) {
        if(cnt[v] % 2 == 0) continue;
        ans = v - 1;
    }

    print(ans);
}
