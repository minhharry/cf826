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

int next_seg(vector<int> &a, int target, int pos)
{
    int tong = 0;
    int seg_size = 0;
    if (pos>=a.size())
        return seg_size;
    while (tong<target)
    {
        if (pos>=a.size())
            return 3000;
        tong += a[pos];
        ++seg_size;
        ++pos;
    }
    if (tong>target)
        return 3000;
    if (tong==target)
        return max(next_seg(a, target, pos),seg_size);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        vector<int> a;
        for (int i = 0; i<n; ++i)
        {
            a.PB(0);
            cin >> a[i];
        }
        int ans = INF;
        for (int i = 0; i<n; ++i)
        {
            int tong = 0;
            for (int j = 0; j<=i; ++j)
            {
                tong += a[j];
            }
            ans = min(ans,max(i+1,next_seg(a,tong,i+1)));
        }
        cout << ans << endl;
    }
    return 0;
}

















