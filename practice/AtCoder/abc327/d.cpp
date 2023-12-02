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
    int n, m; input >> n >> m;
    valarray<i64> a(m), b(m); input >> a >> b;
    a -= 1, b -= 1;

    lib::graph G(n);
    ITR(u, v, lib::views::zip(a, b)) {
        G.add_edge_bidirectionally(u, v);
    }

    print.yesno(G.is_bipartite());
}
