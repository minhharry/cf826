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
int sizenum(string s)
{
    int ans = 0;
    if (s=="M")
        return ans;
    for (int i = 0; i<s.size(); ++i)
    {
        if (s[i]=='X') ans += 10;
        if (s[i]=='S')
        {
            ans += 1;
            ans = -ans;
        }
        if (s[i]=='L')
            ans += 1;
    }
    return ans;
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
        string s1, s2;
        cin >> s1 >> s2;
        if (s1==s2)
        {
            cout << "=" << endl;
            continue;
        }
        int x = sizenum(s1), y = sizenum(s2);

        cout << (x < y ?'<':'>') << endl;

    }
    return 0;
}

















