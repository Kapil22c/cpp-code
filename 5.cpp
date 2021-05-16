#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x;
    // cout << sizeof(x) << endl;
    // cout << INT_MAX << endl;
    // cout << INT_MIN << endl;
    // x = INT_MAX;
    // x = x + 1;
    // cout << "UPDATED x: " << x << endl;
    // cout << "F"
    //      << "    "
    //      << "C" << endl;
    // for (signed i = 0; i <= 300; i += 20)
    // {
    //     cout << i << "   " << (int)((i - 32) * (5.0 / 9.0)) << endl;
    // }

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int space = 1; space <= n - i; space++)
    //     {
    //         cout << "  ";
    //     }
    //     int val = i;
    //     for (int cnt = 1; cnt <= i; cnt++)
    //     {
    //         cout << val << " ";
    //         val++;
    //     }
    //     val -= 2;
    //     for (int cnt = 1; cnt <= i - 1; cnt++)
    //     {
    //         cout << val << " ";
    //         val--;
    //     }
    //     cout << endl;
    // }

    // int n, p;
    // cin >> n >> p;
    // float ans = 0;
    // float inc = 1.0;
    // for (int t = 0; t <= p; t++)
    // {
    //     while (ans * ans <= n)
    //     {
    //         ans += inc;
    //     }
    //     ans -= inc;

    //     inc = inc / 10;
    // }

    // cout << ans << endl;

    // int x = 0, y = 0;
    // char ch;
    // ch = cin.get();
    // while (ch != '\n')
    // {
    //     if (ch == 'n' || ch == 'N')
    //         y++;
    //     else if (ch == 's' || ch == 'S')
    //         y--;
    //     else if (ch == 'e' || ch == 'E')
    //         x++;
    //     else
    //         x--;
    //     ch = cin.get();
    // }
    // cout << "X: " << x << " "
    //      << "Y: " << y << endl;

    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        int val = i%2==0?0:1;
        for (int j = 1; j <= i; j++)
        {
           cout<<val;
           val = 1-val;
        }
        cout << endl;
    }

    // int n;
    // cin >> n;
    // int no;
    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> no;
    //     ans ^= no;
    // }

    // cout << ans << endl;
    return 0;
}