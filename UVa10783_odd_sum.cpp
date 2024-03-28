#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int times, begin, end;
    int kase = 1;
    cin >> times;

    while (times--)
    {
        int ans = 0;
        cin >> begin >> end;
        
        for(int i = begin; i < end + 1; i++){
            if (i % 2 == 1) ans += i;
        }
        cout << "Case " << kase << ": " << ans << endl;
        kase++;
    }
    return 0;
}