#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9, mod = 1e9 + 7;
using ll = long long;
int n, tot, st[N], l[N], r[N], vis[N];
ll inv[N], ans;
pair<int, int> a[N];

int dfs(int u)
{
    int sz = 1;
    if (l[u])
        sz += dfs(l[u]);
    if (r[u])
        sz += dfs(r[u]);
    // debug(sz);
    ans = ans * inv[sz] % mod;
    return sz;
}
int cartesian_tree()
{
    tot = 0;
    for (int i = 1; i <= n; i++)
        l[i] = r[i] = vis[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        int k = tot;
        while (k > 0 && a[st[k - 1]] < a[i])
            k--; // use > for min heap
        if (k)
            r[st[k - 1]] = i;
        if (k < tot)
            l[i] = st[k];
        st[k++] = i;
        tot = k;
    }
    for (int i = 1; i <= n; i++)
        vis[l[i]] = vis[r[i]] = 1;
    int rt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
            rt = i;
    }
    return rt;
}
int main()
{
    inv[1] = 1;
    for (int i = 2; i < N; i++)
        inv[i] = inv[mod % i] * (mod - mod / i) % mod;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            int x;
            scanf("%d", &x);
            a[i] = make_pair(x, -i);
        }
        ans = 1LL * n * inv[2] % mod;
        int rt = cartesian_tree();
        dfs(rt);
        printf("%I64d\n", ans);
    }
    return 0;
}
