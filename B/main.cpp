#include <bits/stdc++.h>
#define MP make_pair
#define PB push_back
#define INF INT_MAX
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

using namespace std;

typedef pair <int, int> pii;
typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef cbaaabc
    freopen("debug.inp","r",stdin);
    freopen("debug.out","w",stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n==3)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> a;
        for (int i = 3; i<=n; ++i)
        {
            a.PB(i);
        }
        a.PB(2);
        a.PB(1);
        for (int x : a)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}

















