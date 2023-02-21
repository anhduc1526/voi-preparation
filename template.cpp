#include <bits/stdc++.h>
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define getbit(x, i) (((x) >> (i)) & 1)
#define bit(x) (1 << (x))
#define file ""
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 520
#endif

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
long long rand(long long l, long long r) {
    return l + rd() % (r - l + 1);
}

const int N = 1e6 + 5;
const int mod = 1e9 + 7; // 998244353;
const int inf = INT_MAX;
const long long llinf = LLONG_MAX;
const int lg = 25; // lg + 1

template<class X, class Y> bool minimize(X &a, Y b) {
    return a > b ? (a = b, true) : false;
}
template<class X, class Y> bool maximize(X &a, Y b) {
    return a < b ? (a = b, true) : false;
}
template<class X, class Y> bool add(X &a, Y b) {
    a += b;
    while (a >= mod) a -= mod;
    while (a < 0) a += mod;
    return true;
}

void init() {

}

void process() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen(file".inp", "r",stdin);
    // freopen(file".out", "w",stdout);

    init();
    process();

    return 0;
}