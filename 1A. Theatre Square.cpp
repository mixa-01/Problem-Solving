#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a;
    long long x ,y;
    cin >> n >> m >> a;
    if (n % a == 0)
    {
        x = n / a;
    }
    else if (n % a != 0)
    {
        x = (n / a) + 1;
    }
    if (m % a == 0)
    {
        y = m / a;
    }
    else if (m % a != 0)
    {
        y = (m / a) + 1;
    }
    cout << x * y << endl;

    return 0;
}
