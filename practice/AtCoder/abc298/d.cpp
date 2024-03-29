/*
 * @uni_kakurenbo
 * https://github.com/uni-kakurenbo/competitive-programming-workspace
 *
 * CC0 1.0  http://creativecommons.org/publicdomain/zero/1.0/deed.ja
 */
/* #language C++ GCC */
/* #region template */
#include <bits/stdc++.h>

#include "template/standard.hpp"
/* #endregion */

void solve();

signed main() {
    int $ = 1;
    // std::cin >> $;
    for(int _ = 0; _ < $; ++_) {
        debug_("Case: #" + std::to_string(_));
        solve();
    }
    return 0;
}

#include "hash/sequence_hasher.hpp"

void solve() {
    int q; input >> q;

    lib::sequence_hasher<998244353,10> hash;
    hash.push_back(1);

    REP(q) {
        int t; input >> t;
        if(t == 1) {
            int x; input >> x;
            hash.push_back(x);
        }
        if(t == 2) hash.pop_front();
        if(t == 3) print(hash.get());
    }
}
