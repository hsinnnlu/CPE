#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while(times--)
    {
        int sum, dif;
        cin >> sum >> dif;
        if(sum < dif){
            cout << "impossible" << endl;
            continue;
        }
        else if ((sum + dif) % 2 == 1) cout << "impossible" << endl;
        else{
            int s1 = float(sum + dif) / 2;
            int s2 = sum - s1;
            cout << s1 << " " << s2 << endl;
        }
        
    }
}