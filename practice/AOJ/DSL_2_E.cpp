/*
 * @uni_kakurenbo
 * https://github.com/uni-kakurenbo/competitive-programming-workspace
 *
 * CC0 1.0  http://creativecommons.org/publicdomain/zero/1.0/deed.ja
 */
/* #language C++ GCC */
/* #region template */
#include <bits/stdc++.h>
using namespace std;

#include "template.hpp"
#include "output.hpp"

Output _print;
#define print _print
/* #endregion */

#include <atcoder/segtree>
using namespace atcoder;

#include "data_structure/range_add.hpp"
using namespace Lib;

ll op(ll a, ll b) { return a + b; }
ll e() { return 0; }

signed main() {
    int n, q; cin >> n >> q;

    RangeAdd<ll> data(n);
    debug(data);

    LOOP(q) {
        int t; cin >> t;
        if(t == 0) {
            int l, r, v; cin >> l >> r >> v; --l;
            data.add(l, r, v);
        }
        if(t == 1) {
            int k; cin >> k; --k;
            print(data.get(k));
        }
        debug(data);
    }

    return 0;
}
