#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;

        cin >> s;
        int n = s.length();

        if (n == 3 && s[0] == '1' && s[1] == '0' && s[2] != '0' && s[2] != '1' && s[2] != '2' || n == 4 && s[0] == '1' && s[1] == '0' && s[2] != '0' && s[2] != '0')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
