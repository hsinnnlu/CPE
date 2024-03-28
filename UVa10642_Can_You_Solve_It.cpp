#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times, x, y, nx, ny;
    int count = 0;
    cin >> times;

    while(times--)
    {
        count++;
        int ans = 0;
        cin >> x >> y >> nx >> ny;
        for (int i = x + y + 1; i <= nx + ny; i++) ans += i;
        ans = ans + nx - x; 
        cout << "Case " << count << ": " << ans << endl;
    }
}